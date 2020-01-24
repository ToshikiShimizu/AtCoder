#coding:utf-8
N, L = map(int, input().split())
S = str(input())
ans = 0
t = 1
for s in S:
    if s=='+':
        t += 1
        if t > L:
            t = 1
            ans += 1
    else:
        t -= 1
print (ans)