#coding:utf-8
n = int(input())
n_max = 100
cake = 4
donut = 7
s = set()
for i in range(int(n_max/cake)+1):
    for j in range(int(n_max/donut)+1):
        s.add(4*i+7*j)
if n in s:
    print ('Yes')
else:
    print ('No')
