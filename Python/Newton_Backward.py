import math
from Equation import Equation as eq
xn=45
h=1
y=[1,1.03553,1.07237,1.11061,1.15037,1.19175]
n=len(y)
val=48.25

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
print(f'y({val}) = {round(equation(val),5)}')