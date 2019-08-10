#coding:utf-8
from collections import Counter
N = int(input())
ls = []
for n in range(N):
    ls.append("".join(sorted(input())))
#print (ls)
cnt = Counter(ls)
#print (list(cnt.values()))
ans = [i*(i-1)/2 for i in list(cnt.values())]
print (int(sum(ans)))