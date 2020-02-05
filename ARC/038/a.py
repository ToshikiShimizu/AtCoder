#coding:utf-8
n = int(input())
A = list(map(int, input().split()))
A.sort()
print (sum(A[::-2]))
