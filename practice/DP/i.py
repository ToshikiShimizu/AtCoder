# coding:utf-8
def DPMatch(A, B, cost):
    dp = [[0 for i in range(len(A)+1)] for j in range(len(B)+1)]
    for i in range(len(A)):
        for j in range(len(B)):
                dp[i+1][j+1] = min(dp[i][j],dp[i+1][j],dp[i][j+1]) + cost[i][j]
    return dp[-1][-1]
