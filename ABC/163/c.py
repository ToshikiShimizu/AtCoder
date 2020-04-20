import sys
input = sys.stdin.readline
sys.setrecursionlimit(int(1E+7))
N = int(input())
A = list( map(int,input().split()))
cnt = [0] * N
for a in A:
    cnt[a-1]+=1
for n in range(N):
    print (cnt[n])