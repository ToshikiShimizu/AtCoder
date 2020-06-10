D, N = map(int,input().split())
T = []
for d in range(D):
    T.append(int(input()))
A = []
B = []
C = []

for n in range(N):
    a,b,c = map(int,input().split())
    A.append(a)
    B.append(b)
    C.append(c)

dp = [[-10**8]*N for _ in range(D+1)]

for d in range(D):
    t = T[d]
    for n in range(N):
        if A[n] <= t <= B[n]:
            if d==0:
                dp[d+1][n] = 0
                continue
            for m in range(N):
                dp[d+1][n] = max(dp[d][m] + abs(C[n]-C[m]),dp[d+1][n])
print (max(dp[-1]))