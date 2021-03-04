import itertools
N, K = map(int,input().split())
A = list(map(int,input().split()))
K = min(41,K)
for k in range(K):
    imos = [0] * (N+1)
    for n in range(N):
        a = n - A[n]
        b = n + A[n]
        a = max(0,a)
        b = min(N-1,b)
        imos[a] += 1
        imos[b+1] -= 1
    csum = list(itertools.accumulate(imos))
    A = csum[:-1]
A = [str(a) for a in A]
print (' '.join(A))
