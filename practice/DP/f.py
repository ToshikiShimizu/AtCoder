#coding:utf-8
N = int(input())
K = int(input())
A = list(map(int, input().split()))
S = int(input())
inf = 10000000
dp = [[inf for a in range(len(A)+1)] for s in range(S+1)]
dp[0][0] = 0
for i in range(len(A)):
    print (len(A),i)
    for s in range(S+1):
        if s+1-A[i] >= 0:
            dp[s][i+1] =  min((dp[s-A[i]][i] + 1), dp[s][i])
        else:
            dp[s][i+1] = dp[s][i]
if dp[-1][-1] <= K and dp[-1][-1] > 0:
    print ("YES")
else:
    print ("NO")
