#coding:utf-8
n = int(input())
A = list(map(int,input().split()))
A = [A[i]-i-1 for i in range(n)]
A = sorted(A)
# print (A)
b = A[n//2]
print (sum([abs(a-b) for a in A]))