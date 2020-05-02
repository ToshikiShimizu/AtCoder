import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**7)
INF = 10**10
MOD = 10**9 + 7
X = int(input())
d = 100
for i in range(4000):
    d = int(d * 1.01)
    if d >= X:
        print (i+1)
        exit()

