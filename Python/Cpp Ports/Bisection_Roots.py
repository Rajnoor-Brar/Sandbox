from classEquation import Equation

def bisect(func, a ,b, error=0.001):
    f = func.f
    a,b = sorted([a,b])
    if f(a)*f(b)>=0:
        return
    elif f(a)*f(b)==0:
        roots = [x for x in [a,b] if f(x)==0]
        return roots
    elif f(a)*f(b)<0:
        while (b-a>=error):
            c = (a+b)/2
            if f(c)==0: break
            elif f(a)*f(c)<0: b=c
            elif f(b)*f(c)<0: a=c    
        return c

degree = int(input("Enter the degree of polynomial: "))
equation=Equation(1,degree)

print("Enter the range to look for, ",end="")
a = float(input("\b from "))
b = float(input("\b to "))

print(f"{bisect(equation,a,b,0.00000000001):.4f}")