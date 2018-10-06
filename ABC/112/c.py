#coding:utf-8
import numpy as np
import collections
N = int(input())
arr = []
for n in range(N):
    arr.append(list(map(int,input().split())))
narr = np.array(arr)
x_min  = narr[:,0].min()
x_max = narr[:,0].max()
y_min = narr[:,1].min()
y_max =  narr[:,1].max()
mx = narr[:,2].max()
for k in range(mx+100,mx-1,-1):
    for i in range(x_min,x_max+1):
        for j in range(y_min,y_max+1):
            for x,y,h in arr:
                h_ = max(k-abs(i-x)-abs(j-y),0)
                if h_ != h:
                    break
            else:
                print (i,j,k)
                exit()
