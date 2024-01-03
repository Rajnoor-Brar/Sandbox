import re
import csv
import numpy as np
import io
import matplotlib.pyplot as plt
from mpl_toolkits import mplot3d  # Import the 3D toolkit

def import_data(file:str):
    with open(file,"r") as file:
        list = []
        data = file.read()
        data = re.sub(' +', ' ', data)
        data = re.sub("^ +","",data,flags=re.MULTILINE)
        data = io.StringIO(data)
        reader = csv.reader(data,delimiter=" ")
        for row in reader:
            list.append(row)
        return list


file="C10.txt"
data=np.array(import_data(file),dtype=float)
x=data[:,0].reshape(-1, 1)
a=data[:,1].reshape(-1, 1)
b=data[:,2].reshape(-1, 1)
rad=data[:,3]

smoothness=0.01
showCrossSections = 1
cross_density=15
showCoaxialLines = 1
coax_density=int(0.8/smoothness)

showAxis = 0


t=np.arange(0,2*np.pi,smoothness)
# t=np.append(t,6.29)
t = t.reshape(-1, 1)
u=np.ones(t.shape)
# u=u.transpose()

# Calculate tangents along the central axis
count = len(x)
tangent_y = np.zeros(count)
tangent_z = np.zeros(count)
tangent_y[[0, -1]] = (a[[1, -1],0] - a[[0, -2],0]) / (x[[1, -1],0] - x[[0, -2],0])
tangent_z[[0, -1]] = (b[[1, -1],0] - b[[0, -2],0]) / (x[[1, -1],0] - x[[0, -2],0])
for n in range(1, count-1):
    tangent_y[n] = (a[n+1,0] - a[n-1,0]) / (x[n+1,0] - x[n-1,0])
    tangent_z[n] = (b[n+1,0] - b[n-1,0]) / (x[n+1,0] - x[n-1,0])

# Create cylinder coordinates
cyl_x = np.zeros((len(t), count))
cyl_y = np.zeros_like(cyl_x)
cyl_z = np.zeros_like(cyl_x)
for n in range(count):
    my = tangent_y[n]
    mz = tangent_z[n]
    norm_vec = np.array([1, my, mz])
    norm_vec = norm_vec / np.linalg.norm(norm_vec)
    horz_vec = np.array([0, -mz, my])
    horz_vec = horz_vec / np.linalg.norm(horz_vec)
    vert_vec = np.cross(norm_vec, horz_vec)
    
    horz_vec = horz_vec.reshape(-1, 1) ;vert_vec = vert_vec.reshape(-1, 1)
    point_vec = (np.cos(t) @ horz_vec.T) + (np.sin(t) @ vert_vec.T)
    
    cyl_x[:, n] = point_vec[:, 0] * rad[n]
    cyl_y[:, n] = point_vec[:, 1] * rad[n]
    cyl_z[:, n] = point_vec[:, 2] * rad[n]

# Shift cylinder coordinates to their respective positions on the axis
shift_x = u@x.transpose()
shift_y = u@a.transpose()
shift_z = u@b.transpose()
cyl_x += shift_x
cyl_y += shift_y
cyl_z += shift_z

# Create surface plot
graph = plt.figure().add_subplot(111, projection='3d')
g_cyl = graph.plot_surface(cyl_x, cyl_y, cyl_z)

# Plot the axis if showAxis is True
if showAxis:
    g_axis = graph.plot(x, a, b, linewidth=3)  # Set linewidth directly

# Plot cross-sections if showCrossSections is True
if showCrossSections:
    g_cross = graph.plot(cyl_x[:, ::(1 + cross_density)].ravel(),cyl_y[:, ::(1 + cross_density)].ravel(), cyl_z[:, ::(1 + cross_density)].ravel(), linewidth=1, color='#771DBF')
# Plot coaxial lines if showCoaxialLines is True
if showCoaxialLines:
    g_coax = graph.plot(cyl_x[::(1 + coax_density), :].ravel(),cyl_y[::(1 + coax_density), :].ravel(),cyl_z[::(1 + coax_density),:].ravel(), linewidth=1, color='#A61419')

# Additional formatting
plt.axis('auto')  # Automatically scale axes

# plt.xlabel("x-axis")
# plt.ylabel("y-axis")
# plt.zlabel("z-axis")
plt.grid(True)

plt.show()

