
with open("test_txt.txt", "r") as f:
    data = f.read()
    letters=list(data)
vowel=["a","e","i","o","u","A","E","I","O","U"]
vowels=0
constants=0
uppercase=0
lowercase=0

for i in range(len(letters)):
    if letters[i] in vowel:vowels+=1
    if letters[i].isupper():uppercase+=1
    if letters[i].islower():lowercase+=1
    if letters[i].isalpha() and letters[i] not in vowel:constants+=1
    
print(f"Vowels: {vowels}")
print(f"Constants: {constants}")
print(f"Uppercase: {uppercase}")
print(f"Lowercase: {lowercase}")