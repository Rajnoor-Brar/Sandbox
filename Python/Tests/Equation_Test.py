from Equation import Equation

import json
with open("equation1.json", "r") as file1:
    dict1 = json.load(file1)

with open("equation2.json", "r") as file2:
    dict2 = json.load(file2)

a = Equation(syms=dict1["syms"],coefficients=dict1["coefficients"])
b= Equation(syms=dict2["syms"],coefficients=dict2["coefficients"],name="g")


print("\n",a,"\n")
print(a**2,"\n")
print(2+a,"\n")