print("Enter 1 for Addition")
print("      2 for Subtraction")
print("      3 for Multiplication")
print("      4 for Division")

operation = int(input("Operation : "))
a = float(input("First Number : "))
b = float(input("Second Number : "))

if operation==1:
    print("Sum is ", a+b)
elif operation==2:
    print("Difference is ", a-b)
elif operation==3:
    print("Product is ", a*b)
elif operation==4:
    print("Quotient is ", a/b)
else:
    print("Error!")