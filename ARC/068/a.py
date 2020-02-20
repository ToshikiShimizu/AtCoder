#coding:utf-8
x = int(input())
ans = (x // 11) * 2
x = x % 11
if (x==0):
    pass
elif (x <= 6):
    ans += 1
else:
    ans += 2
print (ans)