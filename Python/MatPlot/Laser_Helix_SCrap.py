import re
import csv
import numpy as np
import io
from mpl_toolkits import mplot3d
import matplotlib.pyplot as plt

show_cross_sections = True
cross_density=15
show_coaxial_lines = True
coax_density=int(0.8/smoothness)
show_axis = True

cyl_x =np.zeros(10,1)
cyl_y =np.zeros(10,1)
cyl_z =np.zeros(10,1)
x=np.zeros(10,1)
a=np.zeros(10,1)
b=np.zeros(10,1)
t=np.zeros(10,1)
# Create plot
fig = plt.figure()
ax = fig.add_subplot(111, projection="3d")

# Optional elements
if show_axis:
    ax.plot(x, a, b, linewidth=30, color="red")

if show_cross_sections:
    for n in range(0,x.shape[0],cross_density):
        ax.plot(cyl_x[:,n],cyl_y[:,n],cyl_z[:,n],linewidth=4, color="blue")
    # cross_xyz = np.stack( [cyl_x[:, : : (1 + cross_density)], cyl_y[:, : : (1 + cross_density)], cyl_z[:, : : (1 + cross_density)]],  axis=-1,   )
    # ax.plot(*cross_xyz.T, linewidth=1, color="blue")

if show_coaxial_lines:
    for n in range(0,t.shape[0],coax_density):
        ax.plot(cyl_x[n,:],cyl_y[n,:],cyl_z[n,:],linewidth=4, color="green")
    # coax_xyz = np.stack([cyl_x[:: (1 + coax_density), :].T, cyl_y[:: (1 + coax_density), :].T, cyl_z[:: (1 + coax_density), :].T],axis=-1,  )
    # ax.plot(coax_xyz.T, linewidth=1, color="green")
