#coding:utf-8
N,K = map(int,input().split())
oldK = K
K = min(N,K)
V = list(map(int,input().split()))
mx = 0
for k in range(1,K+1):
    for i in range(k+1):
        late = V[-(k-i):]
        if len(late)==N:
            late = []
        a = V[:i]+late
        a += [0]
        a.sort()
        idx = min(a.index(0),oldK-k)
        sm = sum(a[idx:])
        mx = max(sm,mx)
print (mx)

