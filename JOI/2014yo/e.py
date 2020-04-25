
from collections import deque
import heapq
INF = 10**10

N,K = map(int,input().split())
CRAB = []
for n in range(N+K):
    c, r = map(int,input().split())
    CRAB.append((c, r))
CR = CRAB[:N]
AB = CRAB[N:]

link = [ [] for _ in range(N)]
for a,b in AB:
    link[a-1].append(b-1)
    link[b-1].append(a-1)

def bfs(n):
    dist = [INF] * N
    dist[n] = 0
    q = deque([n])
 
    while q:
        node =  q.popleft() 
        if dist[node] == CR[n][1]:
            continue
        for next in link[node]:
            if dist[next] == INF:
                dist[next] = dist[node] + 1
                q.append(next)
    return dist

cost = [bfs(i) for i in range(N)]
for n in range(N):
    c,r = CR[n]
    for m in range(N):
        cost[n][m] = c if cost[n][m] <= r else INF

def dijkstra(s, g):
    dists  = [INF for i in range(N)]
    dists[s] = 0
    pq = [(0, s)] # 優先度付きキューのオブジェクトそのものはただのリスト
    while(pq[0][1]!=g):
        d, node = heapq.heappop(pq)
        if (d > dists[node]): # 探索の対象にする必要があるか確認
            continue
        for next in range(N):
            c = cost[node][next]
            if d + c < dists[next]:
                dists[next] = d + c
                heapq.heappush(pq, (dists[next],next))
    return pq[0][0]
print (dijkstra(0,N-1))
