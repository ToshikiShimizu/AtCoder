import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**7)
MOD = 10**9 + 7

N = int(input())
INF = 10**10
cost = [[INF]*N for _ in range(N)]

for u in range(N):
    C = list(map(int, input().split()))
    for v in range(N):
        if u==v: # INFのままにする
            continue
        cost[u][v] = C[v]
 
ans = 0
for u in range(N):
    for v in range(u+1,N):
        mn = INF # u-w-vのような経路の中で最小の距離を求める
        for w in range(N):
            mn = min(mn, cost[u][w]+cost[w][v])    
        if (cost[u][v] > mn): # 与えられた行列が最短経路ではない
            print (-1)
            exit()
        elif (cost[u][v] < mn): # 等しくない場合はu-vを直接結ぶ橋が必要 
            ans += cost[u][v]                      
print (ans)