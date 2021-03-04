N = int(input())
A = list(map(int, input().split()))
M = 20
dp = [[0]*(M+1) for _ in range(N-1)]
dp[0][A[0]] = 1
A = A[1:]
for n in range(N-2):
    for m in range(M+1):
        if m-A[n] >= 0:
            dp[n+1][m] += dp[n][m-A[n]]
        if m+A[n] <= M:
            dp[n+1][m] += dp[n][m+A[n]]
print (dp[-1][A[-1]])