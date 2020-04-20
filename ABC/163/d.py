import sys
input = sys.stdin.readline
sys.setrecursionlimit(int(1E+7))
N, K = map(int,input().split())
ans = 0
MOD = int(1E+9 + 7)
for n in range(K,N+2):
    x = (N+1-n) * n + 1
    ans += x
    ans %= MOD
print (ans)
