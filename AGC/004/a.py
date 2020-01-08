#coding:utf-8
a,b,c = map(int,input().split())

if (a%2==0 or b%2==0 or c%2==0):
    print (0)
else:
    print (a*b*c//max(a,max(b,c)))