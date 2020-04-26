import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**7)
INF = 10**10
a,b,c,d = map(int,input().split())
while(1):
    c -= b
    if (c<=0):
        print ('Yes')
        break
    a -= d
    if (a<=0):
        print ('No')
        break