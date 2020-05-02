import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**7)
INF = 10**10
MOD = 10**9 + 7

A, B, N = map(int,input().split())
x = min(B-1,N)
v = (A*x)//B - A * (x//B)
print (v)