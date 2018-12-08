#coding:utf-8
s = int(input())
ls = []
for i in range(s):
    ls.append(int(input()))
ans = sum(ls)-max(ls)/2
print (int(ans))
