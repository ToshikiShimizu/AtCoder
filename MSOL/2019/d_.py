#coding:utf-8
import numpy as np
N = int(input())
master_idx = np.arange(N)
cnt_edge = np.zeros(N)
dead_edge = np.zeros(N)
valid_idx = np.arange(N)
connect = [[] for i in range(N)]
AB = []
for n in range(N-1):
    a,b = map(int,input().split())

    a-=1
    b-=1

    AB.append([a,b])
    cnt_edge[a] += 1
    cnt_edge[b] += 1
    connect[a].append(b)
    connect[b].append(a)
C = list(map(int,input().split()))
print (cnt_edge)
print (connect)
def find(master_idx, cnt_edge, dead_edge, connect, valid_idx):    
    idx = np.lexsort((dead_edge[valid_idx],cnt_edge[valid_idx]))[::-1]
    return master_idx[valid_idx][idx][0]
def fill(finded_idx, dead_edge, valid_idx, connect):
    for c in connect[finded_idx]:
        dead_edge[c] += 1
    valid_idx = valid_idx[valid_idx != finded_idx]
    return dead_edge, valid_idx
ls_f = []
for n in range(N-1):
    finded_idx = find(master_idx, cnt_edge, dead_edge, connect, valid_idx)
    dead_edge, valid_idx = fill(finded_idx, dead_edge, valid_idx, connect)
    print (finded_idx)
    ls_f.append(finded_idx)
ans = np.zeros(N)
ans[ls_f] = np.sort(C)[::-1]
ans = ans.astype(np.int)
sm = 0
for a,b in AB:
    print (a,b)
    mn = min(ans[a],ans[b])
    sm += mn
ans = ans.astype(np.str)[:-1]
print (int(sm))
ls = ans.tolist()
print (ls)
print (" ".join(ls))
