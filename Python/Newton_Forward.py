import math
from Equation import Equation as eq

val=4.5
x0=1
h=1
y=[4,5,6]
n=len(y)

del_y0 = [0 for _ in range(n)];     a=del_y0.copy()

for i in range(n):
    for j in range(i+1):    del_y0[i]+=((-1)**j)*y[i-j]*math.comb(i,j)
    a[i]=del_y0[i]/(h**i)/math.factorial(i)
        
equation=0
for i in range(n):
    if i>0:
        roots=[x0+k*h for k in range(i)]
        coeffs=eq.rootCoeffs(roots=roots)
        equation+=a[i]*eq(coefficients=coeffs)
    else:equation+=a[i]

equation.name='y'
print(equation)
print(f'y({val}) = {round(equation(val),5)}')
# for i in range(15): print(f'y({x0+i*h/2}) = {round(equation(x0+i*h/2),5)}')
