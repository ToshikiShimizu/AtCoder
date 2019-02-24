#coding:utf-8
N = int(input())
ans = 0
for n in range(N):
    x,u = input().split()
    if u == "BTC":
        ans += float(x) * 380000
    else:
        ans += float(x)
print (ans)
