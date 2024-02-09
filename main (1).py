word=input("")
result=""
for char in word:
    value=(ord(char)+1)
    new_word=chr(value)
    result=result+new_word
print(result)