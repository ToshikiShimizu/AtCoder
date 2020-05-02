from itertools import accumulate
MOD = 10**9+7
N, Q = map(int, input().split())
A = list(map(int, input().split()))
C = list(map(int, input().split()))

D = [0]
for n in range(N-1):
    d = pow(A[n],A[n+1],MOD)
    D.append(d)
acc = list(accumulate(D))

C.insert(0,1)
C.append(1)
ans = 0
for q in range(len(C)-1):
    ans += abs(acc[C[q+1]-1]-acc[C[q]-1]) % MOD
print (ans%MOD)