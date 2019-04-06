#coding:utf-8
import math
N = int(input())
A = [0] * 5
for i in range(len(A)):
    A[i] = int(input())
min_a = min(A)
print(math.ceil(N/min_a)+4)
