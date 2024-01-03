


import numpy as np

a = np.array([1,2,3]).reshape(-1,1)
b = np.array([[4,5,6]])
print(a.shape, b.shape)
print(np.outer(a,b))
print(a@b) 


