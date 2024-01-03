def fac(n):
    if n==0: return 1
    return n*fac(n-1)

num = float(input("Enter the positive integer : "))

if (num>0 and num%1==0):
    print("Factorial of", int(num),"is",fac(num))
         
elif (num<0 and num%1==0):
    print("Invalid Input. Number Negative")
elif (num>0 and num%1!=0):
    print("Invalid Input. Number not Integer")
elif (num<0 and num%1!=0):
    print("Invalid Input. Number negative and not Integer")
    
else:
    print("Zero!")