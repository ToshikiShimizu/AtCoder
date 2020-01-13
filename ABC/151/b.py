#coding: utf-8
n,k,m = map(int, input().split())
A = list(map(int, input().split()))
ans = m*n-sum(A)
if (ans <= k):
    print (max(0,ans))
else:
    print (-1)
