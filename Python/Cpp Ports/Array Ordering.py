def sorter(values):
    count = len(values)
    
    for i in range(count-1):
        for j in range(i+1, count):
            if values[i] > values[j]:
                values[i], values[j] = values[j], values[i]
    return values


count = int(input("Enter the number of elements you want to enter: "))

values = [float(input("Enter the value: ")) for _ in range(count)]

sequence = sorter(values)

order = input("Ascending or Descending: ")

if order == "decending" or order == "Descending":
    for i in range(count-1, -1, -1): print(sequence[i])
elif order == "ascending" or order == "Ascending":
    for i in range(count): print(sequence[i])
else:
    print("Invalid input")
    
