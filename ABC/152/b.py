#coding:utf-8
a,b = map(int,input().split())
if (a>b):
    a,b = b,a
print (str(a)*b)