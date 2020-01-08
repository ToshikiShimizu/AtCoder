#coding:utf-8
from collections import Counter
N = int(input())
A = list(map(int, input().split()))
c = Counter(A)
ans = 0
for it in c.items():
    if it[0] <= it[1]:
        ans += (it[1]-it[0])
    else:
        ans += it[1]
print (ans)
