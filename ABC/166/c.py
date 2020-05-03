import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**7)
INF = 10**10
MOD = 10**9 + 7

N, M = map(int,input().split())
ok = [1] * N
H = list(map(int,input().split()))
for m in range(M):
    a, b = map(int,input().split())
    a-=1
    b-=1
    if H[a] < H[b]:
        ok[a] = 0
    elif H[a] > H[b]:
        ok[b] = 0
    else:
        ok[a] = ok[b] = 0
print (sum(ok))
    