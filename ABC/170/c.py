X, N = map(int,input().split())
P = list(map(int,input().split()))
P.sort()
diff = 10**10
for p in range(102):
    if p in P:
        continue
    if abs(X-p) < diff:
        diff = abs(X-p)
        ans = p
print (ans)