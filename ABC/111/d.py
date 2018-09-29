#coding:utf-8
import numpy as np
import collections
n = int(input())
ls = []
for i in range(n):
     ls.append(list(map(int,input().split())))
sign = []
for xy in ls:
    sign.append(sum(xy)%2)
if (len(set(sign)))==2:
    print (-1)
