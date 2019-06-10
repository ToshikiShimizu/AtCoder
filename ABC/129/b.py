#coding:utf-8
N = int(input())
ls = list(map(int,input().split()))
ans = []
for n in range(N):
    ans.append(abs(sum(ls[:n])-sum(ls[n:])))
print (min(ans))
