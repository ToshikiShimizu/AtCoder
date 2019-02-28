#coding:utf-8
N = int(input())
A = list(map(int, input().split()))
S = int(input())
print (A)
dp = [[0 for a in range(len(A)+1)] for s in range(S+1)]
dp[0][0] = 1
for i in range(len(A)):
    print (len(A),i)
    for s in range(S+1):
        if s+1-A[i] >= 0:
            dp[s][i+1] =  dp[s-A[i]][i] or dp[s][i]
        else:
            dp[s][i+1] = dp[s][i]
print (dp)
print (dp[-1][-1])
