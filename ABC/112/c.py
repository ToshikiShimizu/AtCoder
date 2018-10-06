#coding:utf-8
import numpy as np
import collections
N = int(input())
arr = []
for n in range(N):
    arr.append(list(map(int,input().split())))
arr = np.array(arr)
x_min  = arr[:,0].min()
x_max = arr[:,0].max()
y_min = arr[:,1].min()
y_max =  arr[:,1].max()
mx = arr[:,2].max()
dx = x_max-x_min
dy = y_max-y_min
s = max(dx,dy)+1
for k in range(mx+s,mx-1,-1):
    for i in range(x_min,x_max+1):
        for j in range(y_min,y_max+1):
            for x,y,h in arr:
                if(max(k-abs(i-x)-abs(j-y),0)!=h):
                    break
            else:
                print (i,j,k)
                exit()
