N = int(input())
A = []
for n in range(N):
    a = int(input())
    A.append(a)
ans = 0

dp = [[0]*N for _ in range(N)]
if N%2==0:
    for n in range(N):
        dp[n][n] = A[n]


for k in range(N//2):
    for i in range(N):
        j=(i+2*k+(N+1)%2)%N

        if A[i]<A[(j-1)%N]:
            left = dp[(i)%N][(j-2)%N]+A[j]
        else:
            left = dp[(i+1)%N][(j-1)%N]+A[j]
        if A[(i+1)%N]<A[j]:
            right = dp[(i+1)%N][(j-1)%N] + A[i]
        else:
            right = dp[(i+2)%N][(j)%N]+A[i]

        dp[i][j] = max(left,right)


for n in range(N):
    if A[(n+1)%N] > A[(n-1)%N]:
        ans = max(ans, A[n] + dp[(n+2)%N][(n-1)%N])
    else:
        ans = max(ans, A[n] + dp[(n+1)%N][(n-2)%N])        
print (ans)
#print(dp)



