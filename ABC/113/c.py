#coding:utf-8
import numpy as np
def argsort_p1(ls):
    return [sorted(ls).index(t)+1 for t in ls]
N,M = list(map(int,input().split()))
P = []
Y = []
for m in range(M):
    p,y = list(map(int,input().split()))
    P.append(p)
    Y.append(y)
ls = [ [] for _ in range(max(P))]
ls_idx = [ [] for _ in range(max(P))]
for p,y in zip(P,Y):
    ls[p-1].append(y)
    ls_idx[p-1].append(len(ls_idx[p-1]))
ls_dict = []
new_dict = {}
for i,line in enumerate(ls):
    arg_line = argsort_p1(line)
    for arg in arg_line:
        new_dict[str(i+1)+"/"+str(sorted(line)[arg-1])]=str(i+1).zfill(6)+str(arg).zfill(6)
for p,y in zip(P,Y):
    print (new_dict[str(p)+"/"+str(y)])
