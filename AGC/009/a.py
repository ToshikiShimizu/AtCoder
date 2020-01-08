#coding:utf-8
N = int(input())
ls_ab = []
for n in range(N):
    a,b = map(int,input().split())
    ls_ab.append([a,b])
ans = 0
for a,b in ls_ab[::-1]:
    a+=ans
    ans += b - ((a-1) % b + 1)
print (ans)