#coding:utf-8
import copy
N, K = map(int,input().split())
A = list(map(int,input().split()))
for k in range(K+1):
    sm = 0
    for a in A:
        sm += a ^ k
    print (sm)

ls_sm = []

for n in range(40):
    pos = 0
    for a in A:
        pos += (a & pow(2, n)>0)
    if pos < (len(A)/2):
        eff  = (len(A) - 2 * pos)*(2**n)
    else:
        eff = 0
    ls_sm.append(eff)
print (ls_sm)
