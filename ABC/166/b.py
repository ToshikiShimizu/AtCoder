import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**7)
INF = 10**10
MOD = 10**9 + 7
# N = int(input())
# A = list(map(int,input().split()))
ls = []
N, K = map(int,input().split())
for k in range(K):
    _ = input()
    A = list(map(int,input().split()))
    ls+=A
print (N-len(set(ls)))

