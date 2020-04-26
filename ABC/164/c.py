import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**7)
INF = 10**10
N = int(input())
ls = []
for n in range(N):
    ls.append(input())
print (len(set(ls)))
