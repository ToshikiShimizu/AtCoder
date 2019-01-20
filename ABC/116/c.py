#coding:utf-8
N = int(input())
H = list(map(int,input().split()))
task = []
#print (N,H)
ans = 0
while(1):
    min_H = min(H)
    ans += min_H
    H = [h -  min_H for h  in H]
    idx = H.index(0)
    #print (H)
    head = H[:idx]
    tail = H[idx+1:]
    #print (head,tail)
    if len(head) > 0:
        task.append(head)
    if len(tail) > 0:
        task.append(tail)
    if len(task) == 0:
        break
    H = task.pop(0)
print (ans)
