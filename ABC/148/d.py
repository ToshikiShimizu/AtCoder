#coding:utf-8
n = int(input())
A = list(map(int,input().split()))
q = 0
for i in A:
    if i==q+1:
        q+=1
if q > 0:
    print (n-q)
else:
    print (-1)