#coding:utf-8
import numpy as np
N = int(input())
ls = []
for n in range(N):
  a,b= map(int,input().split())
  ls.append([a,b])
ls = np.array(ls)
idx = np.argsort(ls[:,1])
ls = ls[idx]
sm = 0
for a,b in ls:
  sm += a
  if sm > b:
    print("No")
    exit()
print ("Yes")

