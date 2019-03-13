# coding:utf-8
def levenshtein(S, T):
    dp = [[0 for j in range(len(T)+1)] for i in range(len(S)+1)]
    for i in range(len(S)+1):
        dp[i][0] = i
    for j in range(len(T)+1):
        dp[0][j] = j
    for i in range(len(S)):
        for j in range(len(T)):
            if S[i] == T[j]:
                dp[i+1][j+1] = dp[i][j]
            else:
                dp[i+1][j+1] = min(dp[i+1][j],dp[i][j+1],dp[i][j])+1
    return dp[-1][-1]
    
