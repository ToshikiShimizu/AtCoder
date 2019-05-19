#coding:utf-8
N,k = map(int,input().split())
S = input()
ans = ""
for i in range(N):
    if i == (k-1):
        ans += S[i].lower()
    else:
        ans += S[i]
print (ans)
