#coding:utf-8
import numpy as np
N, M = map(int,input().split())
X = list(map(int,input().split()))
X = sorted(X)
d = np.diff(X)
d = sorted(d)
if N == 1:
    print (sum(d))
else:
    print (sum(d[:-(N-1)]))
