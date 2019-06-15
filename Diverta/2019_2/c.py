#coding:utf-8
N = int(input())
A = sorted(list(map(int, input().split())))
mn = A[0]
mx = A[-1]
ls_xy = []
for a in A[1:-1]:
    if a > 0:
        ls_xy.append([mn,a])
        mn -= a
    else:
        ls_xy.append([mx,a])
        mx -= a
ls_xy.append([mx,mn])
print (mx -mn)
[print (x,y) for x,y in ls_xy]


