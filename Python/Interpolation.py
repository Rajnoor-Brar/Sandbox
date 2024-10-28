from Polynomial import Polynomial as eq

x=[1,2,3,4,6,7]
y=[1,4,8,16,64,128]
k=5

n=len(x);   a=[0 for _ in range(n)]

for i in range(n):
    a[i]=y[i]
    for j in range(n):
        if i!=j: a[i]/=(x[i]-x[j])

equations=[0 for _ in range(n)]

for i in range(n):
    rootlist=[x[j] for j in range(n) if i!=j]
    coeffs=eq.rootCoeffs(roots=rootlist)
    for j in range(len(coeffs)):coeffs[j]*=a[i]
    equations[i]=eq(coefficients=coeffs)

curve=0
for i in range(n):
    curve=equations[i]+curve
curve.name="y"
print(curve)
print(f"x = {k}, y= {curve(k)}")
                         
 