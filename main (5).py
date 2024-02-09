values = list(map(int,input().split(",")))
n = len(values)
for i in range(n - 1):
    for j in range(0, n - i - 1):
        if values[j] > values[j + 1]:
            values[j], values[j + 1] = values[j + 1], values[j]
print(values)

    