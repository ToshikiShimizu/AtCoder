#coding:utf-8
N = int(input())
B = list(map(int, input().split()))
M = list(map(int, input().split()))
A = int(input())
dp = [[-1 for a in range(A+1)] for b in range(len(B)+1)]
dp[0][0] = 0
for i in range(len(B)):
    for j in range(A+1):
        if dp[i][j] >= 0:#dp[i][j]を作れるなら
            dp[i+1][j] = M[i]#dp[i+1][j]を考える
        elif j < B[i] or dp[i+1][j-B[i]] <= 0:#dp[i+1][j]を作れない場合
            dp[i+1][j] = -1
        else:
            dp[i+1][j] = dp[i+1][j-B[i]] - 1
print (dp[-1][-1]>=0) 
