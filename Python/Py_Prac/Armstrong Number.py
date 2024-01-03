num = float(input("Enter the positive integer : "))

if (num>0 and num%1==0):
    num=int(num)
    letters=[int(x) for x in str(num)]
    length=len(str(num))
    sum=sum([x**length for x in letters])

    if sum==num:
        print(num,"is an Armstrong number")
    else:
        print(num,"is not an Armstrong number")
        
        
elif (num<0 and num%1==0):
    print("Invalid Input. Number Negative")
elif (num>0 and num%1!=0):
    print("Invalid Input. Number not Integer")
elif (num<0 and num%1!=0):
    print("Invalid Input. Number negative and not Integer")
    
else:
    print("Zero!")