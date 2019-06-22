#coding:utf-8
import numpy as np
N,L = map(int,input().split())
ls = list(range(N))
ls = [i+L for i in ls]
ls = np.array(ls)
idx = np.argsort(np.abs(ls))[1:]
print (sum(ls[idx]))