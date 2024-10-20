import math
from Equation import Equation as eq
xn=7
h=1
y=[1,4,8,16,32,64,128]
n=len(y)

del_yn = [0 for _ in range(n)];      a=del_yn.copy()

for i in range(n):
    for j in range(i+1):    del_yn[i]+=((-1)**j)*y[n-1-j]*math.comb(i,j)
    a[i]=del_yn[i]/(h**i)/math.factorial(i)  

equation=0
for i in range(n):
    roots=[xn-k*h for k in range(i)]
    coeffs=eq.rootCoeffs(roots=roots)
    equation+=a[i]*eq(coefficients=coeffs)

equation.name='y'
print(equation)
for i in range(n): print(f'y({xn-i*h}) = {equation(xn-i*h)}')
