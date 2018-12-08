#coding:utf-8
n,k = map(int,input().split())
ls = []
for i in range(n):
    ls.append(int(input()))
#ls = [100000-i for i in range(100000)]
#n = 100000
#k = 1000
ls = sorted(ls)
ans = 1000000000
for i in range(n-k+1):
    mx = ls[i+k-1]
    mn = ls[i]
    ans = min(ans,mx - mn)
print (ans)
