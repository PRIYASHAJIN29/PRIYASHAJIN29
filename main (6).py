def fibo(num):
    if num<=1:
        return num
    else:
        return(fibo(num-1)+fibo(num-2))
num=int(input())
for i in range(0,num):
    print(fibo(i),end=" ")