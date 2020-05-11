N,M,K = map(int,input().split())
dp = [[0]*(K+2) for _ in range(2)]
dp[0][0] = M
MOD = 998244353
for n in range(N-1):
    cur = n % 2
    next = (n+1) % 2
    dp[next] = [0]*(K+2) 
    for k in range(K+1):
        dp[next][k] += dp[cur][k] * (M-1)
        dp[next][k+1] += dp[cur][k]
        dp[next][k] %= MOD
        dp[next][k+1] %= MOD
print(sum(dp[(N+1)%2][:-1]))