#coding:utf-8
a,b,c = map(int,input().split())
s = (a+b+c)/2.0
S = (s * (s-a) * (s-b) * (s-c)) ** 0.5
print (int(S))
