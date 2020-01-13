#coding:utf-8
from collections import defaultdict
dd = defaultdict(int)
N,M = map(int, input().split())
ans = 0
ac = 0
for m in range(M):
    p, s = input().split()
    p = int(p)
    if dd[p] != -1:
        if (s=="WA"):
                dd[p]+=1
        else:
            ans += dd[p]
            ac += 1
            dd[p] = -1
print (ac,ans)