import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**7)
INF = 10**10
s, w = map(int,input().split())

if s <= w:
    print ('unsafe')
else:
    print ('safe')