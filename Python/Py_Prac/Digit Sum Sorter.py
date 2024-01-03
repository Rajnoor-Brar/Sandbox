import csv

with open("data.csv") as file:
    data=csv.DictReader(file)
    students=[student for student in data]
    
def sorter(student):
    marks = str(student["Marks"])
    sum=0
    for digit in marks:
        sum += int(digit)
    return sum

for student in sorted(students, key=sorter):
    print(f"{student['Student']} of Section {student['Section']} has scored {student['Marks']}")
        