#coding:utf-8
s = str(input())
A = list(map(int, input().split()))
ans = ''
for i in range(len(s)+1): 
    if i in A:
        ans += '"'
    if i==len(s):
        break
    ans += s[i]

print (ans)