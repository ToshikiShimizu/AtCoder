#coding:utf-8
N, M = map(int,input().split())
for n in range(N):
    L = list(map(int,input().split())) 
    if n == 0:
        s = set(L[1:])
    else:
        s = s&set(L[1:])
print (len(s))
ls_cnt = [0 for i in range(M)]
while(N>0):
    idx = 0
    if (N - s[idx] == 0 ) or (N - 2*s[idx] >= 0):
        N -= s[idx]
        idx = 0
        print (s[idx])
        ls_cnt[idx] += 1  
    else:
        idx +=1
print (ls_cnt)
