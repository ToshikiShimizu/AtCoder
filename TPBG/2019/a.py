#coding:utf-8
a,b,c = list(map(int,input().split()))
if a < c and b > c:
    print ("Yes")
elif b < c and a > c:
    print ("Yes")
else:
    print ("No")
