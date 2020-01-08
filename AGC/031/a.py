#coding:utf-8
from collections import Counter
n = int(input())
s = input()
c = Counter(s)
ans = 1
for v in c.values():
    ans *= (v+1)
    ans %= int(1e+9+7)
    
print (ans-1)