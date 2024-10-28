import math
from Polynomial import Polynomial as eq
x0=1
h=0.1
n=122

x=[x0+i*h for i in range(n+1)]
y=[math.log(i) for i in x]
order=2

def Interpolate(x:list,y:list) -> "eq":
    n=len(y)
    h=(x[n-1]-x[0])/(n-1)
    x0=x[0]
    
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
    return equation

integrand=0
for i in range(n+1-order):
    if i%order==0:
        func=Interpolate([x[j] for j in range(i,i+order+1)],[y[j] for j in range(i,i+order+1)])
        integral=func.integrate()
        integrand+=integral(x[i]+order*h)-integral(x[i])
        
print(f"{integrand:.5f}")
