#coding: utf-8
S = input()
old = 'init'
ans = -1
for s in S:
    if old!=s:
        ans += 1
    old = s
print (ans)