#coding:utf-8
import numpy as np
from functools import reduce
def gcd(a,b):
    while (b!=0):
        a,b = b, a%b
    return a
N,X = map(int,input().split())
x = np.array(list(map(int,input().split())))
ls = abs(X-x)
print (reduce(gcd,ls))
