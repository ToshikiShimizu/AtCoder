import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**7)
INF = 10**10
MOD = 10**9 + 7
N = int(input())
A = list(map(int,input().split()))

minus = []
plus = []
for i in range(len(A)):
    minus.append(A[i]-(i+1))
    plus.append(-A[i]-(i+1))

d = {}
for m in minus:
    d[m] = d.get(m,0) + 1

ans = 0
for p in plus:
    ans += d.get(p,0)
print (ans)