#coding:utf-8
import numpy as np
from collections import Counter
import math
def nCr(n,r):
    f = math.factorial
    return f(n) // f(r) // f(n-r)
n = int(input())
A = list(map(int, input().split()))
A.insert(0,0)
A = np.cumsum(A)
#print (A)
c = Counter(A)
ans = 0
for v in c.values():
    if (v>1):
        ans+= (nCr(v,2))
print (ans)