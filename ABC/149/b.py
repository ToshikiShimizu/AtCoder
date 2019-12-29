#coding:utf-8
a,b,k = map(int,input().split())

m = min(a,k)
a -= m
k -= m
b -= k

print (a,max(b,0))