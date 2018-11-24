#coding:utf-8
ls = list(map(int,input().split()))
ls.sort()
print (abs(ls[0]-ls[1])+abs(ls[1]-ls[2]))
