#coding:utf-8
#import numpy as np
def argsort_p1(ls):
    return [sorted(ls).index(t)+1 for t in ls]

N,M = list(map(int,input().split()))
P = []
Y = []

for m in range(M):
    p,y = list(map(int,input().split()))
    P.append(p)
    Y.append(y)
#print (P,Y)
ls = [ [] for _ in range(max(P))]
temp = [ [] for _ in range(max(P))]
ls_idx = []
#print (ls)
for p,y in zip(P,Y):
    ls[p-1].append(y)
    ls_idx.append(len(temp[p-1]))
    temp[p-1].append(len(temp[p-1]))
#print (ls_idx)
#ls_dict = []
# ls_arg_line = []
# for line in ls:
#
#     ls_arg_line.append(argsort_p1(line))
ls_arg_line = [argsort_p1(line) for line in ls]
for i,(p,y) in enumerate(zip(P,Y)):
    #print (i,p,y)
    print (str(p).zfill(6)+str(ls_arg_line[p-1][ls_idx[i]]).zfill(6))
