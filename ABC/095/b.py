N, X = map(int, input().split())
M = []
for n in range(N):
    m = int(input())
    M.append(m)
    X -= m
mn = min(M)
print (N+X // mn )