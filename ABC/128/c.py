#coding:utf-8
import itertools
import numpy as np
ls_S = []
N,M = map(int,input().split())
for m in range(M):
    S = list(map(int,input().split()))
    S = [s-1 for s in S]
    ls_S.append(S[1:])
ptns = list(itertools.product(range(0,2), repeat=N))
ptns = np.array(ptns)
P = list(map(int,input().split()))
def check(P,ls):
    for i in range(len(P)):
        if P[i] == ls[i]:
            pass
        else:
            return 0
    return 1
sm = 0        
for ptn in ptns:
    ans = []
    for S in ls_S:
        ans.append(sum(ptn[S])%2)
    sm += check(P,ans)
print (sm)
