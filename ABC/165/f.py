import bisect
import sys
sys.setrecursionlimit(10**6)
INF = 10**10

N = int(input())
A = [0] + list(map(int,input().split()))

adj = [[] for n in range(N+1)]
for n in range(N-1):
    u, v = map(int,input().split())
    adj[u].append(v)
    adj[v].append(u)

ans= [0 for i in range(N+1)]
depth = [-1 for n in range(N+1)]
def dfs(s, d, dp): # 頂点番号、深さ、LIS
    depth[s] = d
    idx = bisect.bisect_left(dp,A[s])
    history = dp[idx] # 巻き戻すために保存
    dp[idx] = A[s]
    ans[s] = bisect.bisect_left(dp, INF)
    for i in adj[s]:
        if depth[i]==-1:
            dfs(i, d+1, dp)
    dp[idx] = history # 探索が終わったら巻き戻す
dp = [INF] * len(A)
dfs(1, 0, dp)
for n in range(1,N+1):
    print(ans[n])
