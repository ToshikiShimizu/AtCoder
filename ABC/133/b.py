#coding:utf-8
from scipy.spatial.distance import pdist
N, D = map(int,input().split())
P = []
for i in range(N):
    P.append(list(map(int,input().split())))
DI = pdist(P)
sm = 0
for d in DI:
    sm += d.is_integer()
print (sm)
