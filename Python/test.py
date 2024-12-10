# import pkg_resources
# from subprocess import call

# packages = [dist.project_name for dist in pkg_resources.working_set]
# call("pip install --upgrade " + ' '.join(packages), shell=True)



import numpy as np
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d.art3d import Poly3DCollection

def create_sphere_grid(radius=1, lat_divisions=10, lon_divisions=10):
    """
    Creates a 2D array of points representing a sphere's surface.
    """
    theta = np.linspace(0, np.pi, lat_divisions)  # Latitude angles
    phi = np.linspace(0, 2 * np.pi, lon_divisions)  # Longitude angles

    grid = np.zeros((lat_divisions, lon_divisions, 3))  # 2D array for (x, y, z)

    for i, t in enumerate(theta):
        for j, p in enumerate(phi):
            x = radius * np.sin(t) * np.cos(p)
            y = radius * np.sin(t) * np.sin(p)
            z = radius * np.cos(t)
            grid[i, j] = [x, y, z]
    return grid

def create_faces_from_grid(grid):
    """
    Creates faces by connecting nodes in the 2D grid.
    """
    lat_divisions, lon_divisions, _ = grid.shape
    faces = []

    for i in range(lat_divisions - 1):
        for j in range(lon_divisions):
            # Wrap-around for longitude indices (cyclic grid)
            jp1 = (j + 1) % lon_divisions

            # Define face vertices
            v1 = grid[i, j]
            v2 = grid[i, jp1]
            v3 = grid[i + 1, jp1]
            v4 = grid[i + 1, j]

            # Add the rectangular face (quadrilateral)
            faces.append([v1, v2, v3, v4])

    return faces

def set_axes_equal(ax, scale_factor=0.25):
    """
    Sets the 3D plot axes to equal scale (1x by default) so the spheres appear undistorted.
    Can also scale the entire figure by a factor (e.g., 0.25x for smaller scaling).
    
    Parameters:
        ax: Matplotlib 3D axis.
        scale_factor: Factor by which to scale the axes (default is 1.0 for original size).
    """
    limits = np.array([ax.get_xlim3d(), ax.get_ylim3d(), ax.get_zlim3d()])
    center = np.mean(limits, axis=1)
    max_range = np.max(limits[:, 1] - limits[:, 0]) / 2 * scale_factor

    ax.set_xlim3d([center[0] - max_range, center[0] + max_range])
    ax.set_ylim3d([center[1] - max_range, center[1] + max_range])
    ax.set_zlim3d([center[2] - max_range, center[2] + max_range])

def plot_multiple_sphere_meshes(mesh_configs):
    """
    Plots multiple sphere meshes side by side.
    
    Parameters:
        mesh_configs (list of tuples): Each tuple contains (radius, lat_divisions, lon_divisions, x_offset).
    """
    fig = plt.figure(figsize=(20, 20))  # Increase width for better layout
    ax = fig.add_subplot(111, projection='3d')

    for idx, (radius, lat_divisions, lon_divisions, x_offset) in enumerate(mesh_configs):
        # Create grid and faces for each mesh
        grid = create_sphere_grid(radius=radius, lat_divisions=lat_divisions, lon_divisions=lon_divisions)
        faces = create_faces_from_grid(grid)

        # Apply translation for horizontal positioning
        grid[:, :, 0] += x_offset

        # Plot faces
        for face in faces:
            poly = Poly3DCollection([face], alpha=0.93, edgecolor="k")
            poly.set_facecolor((0, 0, 1, 0.7))  # Translucent blue
            ax.add_collection3d(poly)

    # Adjust view and set axes to equal scaling with a custom scale factor
    set_axes_equal(ax, scale_factor=1.0)  # Keep scaling at 1x
    ax.axis("off")  # Hide axes

    # Remove extra white space around the plot
    plt.subplots_adjust(left=0, right=1, top=1, bottom=0)

    plt.show()

# Configuration for four spheres with different densities and offsets
mesh_configs = [
    (0.7, 4, 8, 0),    # Radius, latitude divisions, longitude divisions, x-offset
    (0.7, 8, 16, 3),   # Denser mesh to the right
    (0.7, 16, 28, 6),   # Even denser
    (0.7, 24, 40, 9),   # Highest density further to the right
]

# Plot all meshes side by side
plot_multiple_sphere_meshes(mesh_configs)