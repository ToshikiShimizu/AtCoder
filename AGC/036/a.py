#coding:utf-8
N = 10**9
S = int(input())
x1 = (S // N) + 1
y2 = N
x2 = 1
y1 = (x1*y2) - S
if S == 10**18:
    x1 = N
    y2 = N
    x2 = 0
    y1 = 0
print (" ".join(map(str,[x1,y1,x2,y2,0,0])))

    
