#coding:utf-8
import itertools
import numpy as np
d, g = map(int,input().split())

ls_p = []
ls_c = []
for i in range(d):
    p, c = map(int,input().split())
    ls_p.append(p)
    ls_c.append(c)
ls_p = np.array(ls_p)
min = ls_p.sum()
ls_c = np.array(ls_c)
nums = [0, 1]
ls_isFull = np.array([list(i) for i in itertools.product(nums, repeat=d)])[:-1]
ls_count = ls_isFull * ls_p
w = np.arange(1,d+1) * 100

def get_idx(ls):
    return max(np.where(ls==0)[0])

for i in range(len(ls_count)):
    if ls_count[i].sum() >=  min:
        continue
    idx = get_idx(ls_isFull[i])
    for j in range(ls_p[idx]):
        score = ls_count[i].dot(w) + ls_isFull[i].dot(ls_c)
        if (score >= g) &  (ls_count[i].sum() < min):
            min = ls_count[i].sum()
            continue
        ls_count[i][idx]+=1
print (min)
