MOD = 998244353
def part_sum(a,A):
  
  #初期化
  N=len(a)
  dp=[[[0 for i in range(N+1)] for i in range(A+1)] for j in range(N+1)]
  dp[0][0][0]=1

  #DP
  for i in range(N):
    for j in range(A+1):
      for k in range(N):
        if a[i]<=j: #i+1番目の数字a[i]を足せるかも
            dp[i+1][j][k+1]=dp[i][j-a[i]][k]+ dp[i][j][k+1]% MOD
        else: #入る可能性はない
            dp[i+1][j][k]=dp[i][j][k]%MOD
  return dp[N][A]



N, S = map(int,input().split())
A = list(map(int,input().split()))

ans = 0
sm = part_sum(A,S)
for n in range(N+1):
    p = pow(2,N-n,MOD)
    ans += p*sm[n]
    ans %= MOD
print (ans)