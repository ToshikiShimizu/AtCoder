import bisect
N = 10**6
dp = [1] * (N+1)
dp[0] =  dp[1] =  0
prime = []
for i in range(2,N+1):
    if dp[i]:
        for j in range(i*i, N+1, i):
            dp[j] = 0
like2017 = [0] * (N+1)
for n in range(N+1):
    if dp[n]==0:
        continue
    query = (n+1)//2
    if dp[query]==1:
        like2017[n] = 1


for n in range(N):
    like2017[n+1] += like2017[n]

Q = int(input())
for q in range(Q):
    l, r = map(int,input().split())
    print (like2017[r]-like2017[l-1])
