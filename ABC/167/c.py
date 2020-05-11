from itertools import product
N,M,X = map(int,input().split())
C = []
A = []
for n in range(N):
    a = list(map(int,input().split()))
    C.append(a[0])
    A.append(a[1:])
INF = 10**9
ans = INF
for p in product([0,1], repeat=N):
    sm = [0] * M
    cost = 0
    for i in range(N):
        if p[i]: # bitが立っていたら
            for m in range(M):
                sm[m] += A[i][m]
            
            cost += C[i] 
    #print (p,sm)
    if min(sm) >= X:
        ans = min(ans,cost)
if ans==INF: # 更新されていなければ-1を出力
    print (-1)
else:
    print (ans)