#coding:utf-8
a,b,k = map(int,input().split())
ls = range(1,101)[::-1]
for i in ls:
    if (a % i == 0 )and (b % i == 0):
        k -= 1 
        if k==0:
            break
print (i)
