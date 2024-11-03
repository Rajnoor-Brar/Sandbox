import math

x0=1
h=0.1
n=100

x=[x0+i*h for i in range(n+1)]
y=[math.log(i) for i in x]
order=2

area=0
if order==1:
    area=y[0]+y[n]+2*sum(y[i] for i in range(1,n))
    area*=h/2
    print(area)

elif order==2:
    area=y[0]+y[n] + 2*sum(y[i] for i in range(1,n) if i%2==0) + 4*sum(y[i] for i in range(1,n) if i%2==1)
    area*=h/3
    print(area)
    
elif order==3:
    area=y[0]+y[n] + 3*sum(y[i] for i in range(1,n) if i%3!=0) + 2*sum(y[i] for i in range(1,n) if i%3==0)
    area*=3*h/8
    print(area)
    

else: print("Process not defined")



