import queue
N,M = map(int,input().split())
adj = [[]for i in range(N+1)]
parent = [-1] * (N+1)
for m in range(M):
    a,b = map(int,input().split())
    adj[a].append(b)
    adj[b].append(a)
q = queue.Queue() # 自分の部屋番号、親の部屋番号
q.put((1,0)) # 部屋1の親は部屋0と考える
while(not q.empty()):
    x, p = q.get()
    if parent[x] != -1:
        continue
    parent[x] = p
    for next in adj[x]:
        if parent[next] == -1:
            q.put((next,x))
print ('Yes')
for p in parent[2:]:
    print(p)