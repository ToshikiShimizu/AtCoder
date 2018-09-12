#coding:utf-8
N,K = map(int,input().split())
ans = int(N/K)**3
if K%2==0:
    ans += (int(N/K)+1)**3
print (ans)
