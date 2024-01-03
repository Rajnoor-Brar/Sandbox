num = float(input("Enter the positive integer : "))

if (num>0 and num%1==0):
    fac=1
    for x in range(1,int(num)+1):
        fac*=x
    
    print("Factorial of", int(num),"is",fac)
        
        
elif (num<0 and num%1==0):
    print("Invalid Input. Number Negative")
elif (num>0 and num%1!=0):
    print("Invalid Input. Number not Integer")
elif (num<0 and num%1!=0):
    print("Invalid Input. Number negative and not Integer")
    
else:
    print("Zero!")