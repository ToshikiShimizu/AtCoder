#coding:utf-8
import numpy as np
N = int(input())
ls_sp = []
for n in range(N):
    s,p = input().split()
    sp = s + str(100-int(p)).zfill(3)
    ls_sp.append(sp)
ans = np.argsort(ls_sp)
for a in ans:
    print (a+1)

