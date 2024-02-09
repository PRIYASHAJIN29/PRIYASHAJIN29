word=input("").split()
value=input("")
n=word[-1]
k=word[0]
for i in word:
    if (n==value) and (k==value):
        print("YES")
        break
    else:
        print("NO")
        break
