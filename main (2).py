word=input("")
count=0
for value in reversed(word):
    if value!=" ":
        count+=1
    else:
        break
print(count)
