#coding:utf-8
import numpy as np
N = int(input())
A = list(map(int,input().split()))
a = np.cumsum(A)[:-1]
b = np.cumsum(A[::-1])[:-1][::-1]
print (np.min(np.abs(a-b)))