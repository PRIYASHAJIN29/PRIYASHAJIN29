str=input("")
word=input("")
index = -1
for i in range(len(str) - len(word) + 1):
    if str[i:i+len(word)] == word:
        index = i
        break
print("Index of first occurrence:", index)
