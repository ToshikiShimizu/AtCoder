#coding:utf-8
from collections import Counter
n = int(input())
A = list(map(int,input().split()))
c = Counter(A)
ans = 0
for i in c.items():
    if i[1]>=i[0]:
        ans += i[1]-i[0]
    else:
        ans += i[1]
print (ans)