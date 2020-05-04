import itertools
N, M, Q = map(int, input().split())
P = []
LR = [[0] * (N+1) for _ in range(N+1)] 
for m in range(M):
    l, r = map(int, input().split())
    LR[l][r] += 1

for q in range(Q):
    p = list(map(int, input().split()))
    P.append(p)

csum = []
for L in LR:
    a = list(itertools.accumulate(L))
    csum.append(a)

for p in P:
    ans = 0
    l, r = p
    for c in csum[l:r+1]:
        ans += (c[r] - c[l-1])
    print (ans)
