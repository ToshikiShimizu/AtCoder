#coding:utf-8
import itertools
N = int(input())
coms = []
for n in range(N):
    A = int(input())
    com = []
    for a in range(A):
        tmp = list(map(int,input().split()))
        com.append(tmp)
    coms.append(com)
#print (coms)
nums = [0, 1]
ans = 0
for pt in itertools.product(nums, repeat=N):
    flag = False
    
    if sum(pt) > ans:
        for idx in range(len(pt)):
            if pt[idx]==1:
                for com in coms[idx]:
                    if pt[com[0]-1] + com[1] == 1:
       
                        flag = True
        if not flag:
            ans = sum(pt)
            #print (pt)
    else:
        pass
        

print (ans)