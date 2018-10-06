#coding:utf-8
min_c = 10000
n,T = list(map(int,input().split()))
for i in range(n):
    c,t = list(map(int,input().split()))
    if t <= T and c < min_c:
        min_c = c
if min_c!=10000:
    print (min_c)
else:
    print ('TLE')
