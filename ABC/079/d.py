import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**7)
MOD = 10**9 + 7

H, W = map(int, input().split())
INF = 10**10
N = 10
cost = [[INF]*N for _ in range(N)]

for i in range(N):
    C = list(map(int, input().split()))
    for j in range(N):
        cost[i][j] = C[j]

for i in range(N):
    for j in range(N):
        for k in range(N):
            cost[j][k] = min(cost[j][i]+cost[i][k], cost[j][k]) 

ans = 0
for h in range(H):
    A = list(map(int, input().split()))
    for a in A:
        if a!=-1:
            ans += cost[a][1]

print (ans)

