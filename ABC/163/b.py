import sys
input = sys.stdin.readline
sys.setrecursionlimit(int(1E+7))
N, M = map(int,input().split())
A = list( map(int,input().split()))
ans = N-sum(A)
if ans < 0:
    print (-1)
else:
    print (ans)