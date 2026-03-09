from Equation import Equation as eq
from Polynomial import Polynomial as poly

coefficients = [
    [10          , poly(coefficients=[10,4], syms="R"), poly(coefficients=[-10,-1], syms="R"), poly(coefficients=[0,1], syms="V")],
    [poly(coefficients=[10,2],syms="R"), 10                                , -10,poly(coefficients=[0,1], syms="V") ],
    [0.          , poly(coefficients=[0,3], syms="R")                       , poly(coefficients=[0,1], syms="R"), poly(coefficients=[0,1], syms="V")]
]
n = len(coefficients)
x = [0 for _ in range(n)]

for i in range(n):
    if coefficients[i][i] == 0:
         ValueError("Matrix is singular!")
         break
    for j in range(i+1, n):
        for k in range(n+1):
            coefficients[j][k] -= coefficients[j][i] / coefficients[i][i] * coefficients[i][k]

x[n-1] = coefficients[n-1][n]/coefficients[n-1][n-1]

for i in reversed(range(0, n-1)):
    x[i] = coefficients[i][n]
    for j in range(i+1, n):
        x[i] -= coefficients[i][j] * x[j]
    x[i] /= coefficients[i][i]

print("The solution is:")
for i in range(n):
    print(f"x{i+1} = {x[i]}")