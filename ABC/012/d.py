import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**7)
MOD = 10**9 + 7

N, M = map(int, input().split())
INF = 10**10
cost = [[INF]*N for _ in range(N)]
for n in range(N):
    cost[n][n] = 0
for m in range(M):
    a, b, t = map(int, input().split())
    cost[a-1][b-1] = t
    cost[b-1][a-1] = t

for i in range(N):
    for j in range(N):
        for k in range(N):
            cost[j][k] = min(cost[j][i]+cost[i][k], cost[j][k])

ans = INF
for n in range(N):
    mx = max(cost[n])
    if mx < ans:
        ans = mx
print (ans)

