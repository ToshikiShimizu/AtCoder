#coding:utf-8
s = input()
ans = 1000
for n in range(len(s)-2):
    temp = abs(753-int(s[n:n+3]))
    if temp < ans:
        ans = temp
print (ans)
