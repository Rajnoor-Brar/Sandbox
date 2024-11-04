import numpy as np

h=0.02
n=200
x=[i*h for i in range(n)]
y=np.array([(x*(x-2)*(x-5)*(x-9)) for x in x])
x=np.array(x)

# Calculate tangents
tangent = np.zeros(len(x))

tangent[[0, -1]] = (y[[1, -1]] - y[[0, -2]]) / (x[[1, -1]] - x[[0, -2]])

for n in range(1, x.shape[0]-1):
  tangent[n] = (y[n+1] - y[n-1]) / (x[n+1] - x[n-1])


print(tangent)