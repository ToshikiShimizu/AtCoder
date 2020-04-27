import heapq
INF = 10**20

N, M, S = map(int, input().split())
adj = [[] for _ in range(N)]
for m in range(M):
    u,v,a,b = map(int, input().split())
    u -= 1
    v -= 1
    adj[u].append((v,a,b))
    adj[v].append((u,a,b))

C = []
D = []
for n in range(N):
    c, d = map(int, input().split())
    C.append(c)
    D.append(d)

M = 2500
S = min(S, M-1) # 2500枚あれば十分
dist = [[INF]*M for _ in range(N)] # dist[都市][銀貨の枚数]
dist[0][S] = 0
pq = [(0,S,0)] # (時間、銀貨の枚数、都市)

while pq:
    d, sil, node = heapq.heappop(pq)
    if dist[node][sil] < d: # 探索の対象にする必要があるか確認
        continue 
     # 銀貨に交換したとして、上限を超えないか、探索の必要があるか
    if sil+C[node] < M and d+D[node] < dist[node][sil+C[node]]:
        dist[node][sil+C[node]] = d + D[node] # 時間の更新
        heapq.heappush(pq, (d + D[node], sil+C[node] ,node))
    for next, a, b in adj[node]:
        # 銀貨が足りるか、探索の必要があるか
        if sil >= a and d + b < dist[next][sil-a]:
            dist[next][sil-a] = d + b
            heapq.heappush(pq, (d + b, sil-a ,next))

for i in range(1,N):
    print(min(dist[i])) # 残っている銀貨の枚数は問わない

