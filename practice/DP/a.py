#coding:utf-8
N = int(input())
a = list(map(int, input().split()))
dp = [0] * (N+1)
for n in range(N):
    dp[n+1] = max(dp[n]+a[n],dp[n])
print (dp[N])
