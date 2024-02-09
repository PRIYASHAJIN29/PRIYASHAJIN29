n=[9,7,5,3,1]
for i in range(1,len(n)):
    temp=n[i]
    j=i-1
    while j>=0 and n[j]>temp:
        n[j+1]=n[j]
        j-=1
    n[j+1]=temp
print(n)
        