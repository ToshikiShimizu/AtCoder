#coding:utf-8
N, W = map(int, input().split())
value = []
weight = []
for n in range(N):
    v_, w_ = map(int, input().split())
    value.append(v_)
    weight.append(w_)
print (value, weight)
inf = float("inf")
dp = [[-inf for w in range(W+1)] for n in range(N+1)]
for w in range(W+1):
    dp[0][w] = 0
print (dp)
for n in range(N):
    for w in range(W+1):
        if weight[n] <= w:
            dp[n+1][w] = max(dp[n][w-weight[n]]+value[n],dp[n][w])
        else:
            dp[n+1][w] = dp[n][w]
print (dp)
print (dp[-1][-1])
