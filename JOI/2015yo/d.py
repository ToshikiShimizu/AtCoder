N, M = map(int, input().split())
D = []
C = []
for n in range(N):
    d = int(input())
    D.append(d)
for m in range(M):
    c = int(input())
    C.append(c)

dp = [[10**10]*(M+1) for _ in range(N+1)]
for m in range(M+1):
    dp[0][m] = 0
for n in range(N):
    for m in range(M):
        dp[n+1][m+1] = min(dp[n+1][m], dp[n][m]+D[n]*C[m])
print (dp[-1][-1])