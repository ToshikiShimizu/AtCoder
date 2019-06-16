#coding:utf-8
w,h,x,y = map(int,input().split())
flag = 0
if w == 2*x and h == 2*y:
    flag = 1
print (str(h*w/2)+" "+str(flag))


