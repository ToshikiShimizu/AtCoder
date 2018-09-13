#coding:utf-8
import numpy as np
n,k = map(int,input().split())
ls = list(map(int,input().split()))

if not (0 in ls):
    ls.append(0)
    k+=1

ls = np.array(ls)
ls.sort()

idx = np.where(ls==0)[0][0]
start = max(0,idx-k)
goal = min(idx+k,len(ls)-1)
answer = []
for i in range(goal-(k-1)+1):
    mi = min(abs(ls[i]),abs(ls[i+k-1]))
    ma = max(abs(ls[i]),abs(ls[i+k-1]))
    answer.append(2*mi+ma)
print (min(answer))
