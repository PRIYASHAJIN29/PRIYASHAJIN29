arr = [64, 25, 12, 22, 11]
for i in range(len(arr)):
    min = i
    for j in range(i + 1, len(arr)):
        if arr[j] < arr[min]:
            min = j
    arr[i], arr[min] = arr[min], arr[i]
target = int(input())
start = 0
end = len(arr) - 1
while start <= end:
    mid = (start + end) // 2
    if arr[mid] == target:
        print(mid)
        break
    elif arr[mid] < target:
        start = mid + 1
    else:
        end = mid - 1
else:
    print("INVALID")

