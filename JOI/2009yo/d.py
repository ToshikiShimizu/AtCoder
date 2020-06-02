import sys
sys.setrecursionlimit(10**7)
dxdy = ((0,1),(0,-1),(1,0),(-1,0))
M = int(input())
N = int(input())

mp = []
mp.append([0]*(M+2))
for n in range(N):
    line = list(map(int, input().split()))
    mp.append([0]+line+[0])
mp.append([0]*(M+2))

ans = 0
def dfs(n,m,d):
    global ans
    if mp[n][m] == 0:
        return
    if ans < d:
        ans = d
    
    mp[n][m] = 0
    for dx, dy in dxdy:
        next_n = n + dy
        next_m = m + dx
        dfs(next_n, next_m, d+1)
    mp[n][m] = 1

for n in range(1,N+1):
    for m in range(1,M+1):
        dfs(n,m,1)
print (ans)