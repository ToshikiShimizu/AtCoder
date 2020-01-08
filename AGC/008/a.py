#coding:utf-8
x, y = map(int, input().split())
def func(a):
    if a<0:
        return 1e+10
    else:
        return a
ls = [func(y-x),func(y+x)+1,func(-y-x)+1,func(-y+x)+2]
print (min(ls))