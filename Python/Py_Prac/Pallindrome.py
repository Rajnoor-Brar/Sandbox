string = input("Enter a phrase : ")

word=[x for x in string]
drow=word.copy()
drow.reverse()

print(word)
print(drow)

if word==drow:
    print(string,"is a pallindrome")
else:
    print(string,"is not a pallindrome")

