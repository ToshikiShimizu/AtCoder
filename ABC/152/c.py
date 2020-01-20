#coding:utf-8
n = int(input())
P = list(map(int, input().split()))
mn = 1e+7
ans = 0
for p in P:
    if (p<mn):
        mn = p
        ans += 1
    else:
        pass
print (ans)