#coding:utf-8
import math
A = [0] * 5
B = [0] * 5
for i in range(len(A)):
    A[i] = int(input())
    B[i] = ((A[i] - 1) % 10) + 1
    A[i] = math.ceil(A[i]/10)*10
min_b = min(B)
print(sum(A)-10+min_b)
