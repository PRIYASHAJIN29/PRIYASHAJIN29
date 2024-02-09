values=list(map(int,input().split(",")))
num=int(input())
low=0
high=len(values)-1
N=False
while low<=high:
    mid=(low+high)//2
    if mid==num:
        N=True
    if mid>num:
        high=mid-1
    else:
        low=mid+1
if N:
    print(N)
    