n = int(input())
result = ''
for i in range(n+1):
    a = 10
    for j in range(1, 10):
        if n % j == 0:
            if i % (n/j) == 0:
                a = min(a, j)
    if a == 10:
        result += '-'
    else:
        result += str(a)
print(result)
