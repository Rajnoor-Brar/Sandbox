import re ; import csv; import io
import numpy as np
import matplotlib.pyplot as plt

def import_data(document:str) -> np.ndarray:
    with open(document,"r") as document:
        data = document.read()
        # Readying the Data. User can trim the file themselves manually and put file in reader directly
        data = re.sub(' +', ' ', data)
        data = re.sub("^ +","",data,flags=re.MULTILINE)
        
        reader = csv.reader(io.StringIO(data),delimiter=" ")
        return np.array([row for row in reader],dtype=float)

# Load data
doc="data.txt"
data=import_data(doc)
x=data[:,0] ;   a=data[:,1] ;    b=data[:,2] ;   rad=data[:,3]
smoothness=0.01

# Generate angles
t = np.arange(0, 2 * np.pi+smoothness, smoothness).reshape(-1,1)
u = np.ones_like(t).reshape(-1,1)

# Calculate tangents
tangent_y = np.zeros(len(x))
tangent_z = tangent_y.copy()

tangent_y[[0, -1]] = (a[[1, -1]] - a[[0, -2]]) / (x[[1, -1]] - x[[0, -2]])
tangent_z[[0, -1]] = (b[[1, -1]] - b[[0, -2]]) / (x[[1, -1]] - x[[0, -2]])

for n in range(1, x.shape[0]-1):
    tangent_y[n] = (a[n+1] - a[n-1]) / (x[n+1] - x[n-1])
    tangent_z[n] = (b[n+1] - b[n-1]) / (x[n+1] - x[n-1])
    
# Create cylinder coordinates
cyl_x = np.zeros((t.shape[0], len(x)))
cyl_y = cyl_x.copy()
cyl_z = cyl_x.copy()

for n, (my, mz) in enumerate(zip(tangent_y, tangent_z)):
    norm_vec = np.array([1, my, mz])  / np.linalg.norm([1, my, mz])
    horz_vec = np.array([0, -mz, my]) / np.linalg.norm([0, -mz, my])
    vert_vec = np.cross(norm_vec, horz_vec)
    
    point_vec= np.cos(t) @ horz_vec.reshape(-1,1).T   +   np.sin(t) @ vert_vec.reshape(-1,1).T
    
    cyl_x[:, n] = point_vec[:, 0] * rad[n]
    cyl_y[:, n] = point_vec[:, 1] * rad[n]
    cyl_z[:, n] = point_vec[:, 2] * rad[n]

# Shift cylinder coordinates
cyl_x += u @ x.reshape(-1,1).T
cyl_y += u @ a.reshape(-1,1).T
cyl_z += u @ b.reshape(-1,1).T

# Create plot
fig = plt.figure(dpi=150)
graph = fig.add_subplot(111, projection="3d")
graph.set_box_aspect([5,1,1])

# Surface plot
g_cyl = graph.plot_surface(cyl_x, cyl_y, cyl_z, cmap="viridis")

#Uncomment below 2 lines and comment out above line, for a skeletal view

# for n in range(0,len(x),15):                      graph.plot(cyl_x[:,n],cyl_y[:,n],cyl_z[:,n], color=[n/x.shape[0]*0.4,n/x.shape[0]*0.3,0.9] , linewidth=1)
# for n in range(0,t.shape[0],int(0.6/smoothness)): graph.plot(cyl_x[n,:],cyl_y[n,:],cyl_z[n,:], color=[0.8,n/t.shape[0]*0.9,n/t.shape[0]*0.6] , linewidth=1)

# Labels and grid
graph.set_xlabel("X-axis")
graph.set_ylabel("Y-axis")
graph.set_zlabel("Z-axis")
plt.show()