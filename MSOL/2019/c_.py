#coding:utf-8
import math
Q = int(input())
ans = []
for q in range(Q):
    x,d,n = map(int,input().split())
    a = d ** n * (math.gamma(x/d + n)) / (math.gamma(x/d ))
    ans.append(a)
for a in ans:
    print (a)
