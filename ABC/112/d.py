#coding:utf-8
import numpy as np
def divisor(n,m):
    arr = []
    for i in range(1,(int(np.sqrt(m))+1)):
        if m % i == 0:
            if i <= m/n:
                arr.append(i)
            if m/i <= m/n:
                arr.append(int(m/i))
    return arr
n,m = list(map(int,input().split()))
print (max(divisor(n,m)))
