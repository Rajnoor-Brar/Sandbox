num = float(input("Enter the positive integer : "))
divisors = list()
count=0
perfect=0

if (num<0 and num%1==0):
    print("Invalid Input. Number Negative")
elif (num>0 and num%1!=0):
    print("Invalid Input. Number not Integer")
    
elif (num<0 and num%1!=0):
    print("Invalid Input. Number negative and not Integer")
    
elif (num>0 and num%1==0):
    
    for x in range(1,int(num)):
        if num%x==0:
            divisors.append(x)
            count+=1
           
    for x in divisors:
        perfect+=x
    
    if num==perfect:
        print(num,"is a perfect number!")
    else:
        print(num,"is not a perfect number") 
else:
    print("Zero!")