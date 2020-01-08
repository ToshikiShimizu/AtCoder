#coding:utf-8
n,k = map(int,input().split())
d = dict()
d['s'],d['p'],d['r'] = map(int,input().split())
T = list(input())
ans = 0
for i in range(len(T)):
    if (i-k >= 0 and T[i-k]==T[i]):
        T[i] = "*"
    else:
        ans += d[T[i]]

print (ans)

