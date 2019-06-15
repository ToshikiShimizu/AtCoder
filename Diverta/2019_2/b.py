#coding:utf-8
import numpy as np
from collections import Counter
ls_x = []
ls_y = []
diff = []
N = int(input())
for n in range(N):
    x,y = map(int,input().split())
    for i in range(len(ls_x)):
        diff.append(str((ls_x[i] - x))+"_"+str((ls_y[i] - y)))
        diff.append(str(-(ls_x[i] - x))+"_"+str(-(ls_y[i] - y)))
    ls_x.append(x)
    ls_y.append(y)
if N == 1:
    print (1)
    exit()
cnt = Counter(diff)
#print (cnt.most_common())
print (N-cnt.most_common(1)[0][1])
