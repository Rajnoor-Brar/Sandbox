length = float(input("Enter the number of terms in Fibonacci to evaluate : "))

if length%1!=0 or length<0:
    print("Enter a Positive Integer")

elif length==0:
    print("Nada!!")
elif length==1:
    print("0")
elif length==2:
    print("0  1")
elif length%1==0 and length>=3:
    sequence=[0,1]
    
    while (length>=3):
        sequence.append(sequence[-1]+sequence[-2])
        length-=1
    
    for x in sequence:
        print(x, end="  ")
