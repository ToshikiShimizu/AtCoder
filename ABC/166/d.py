import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**7)
INF = 10**10
MOD = 10**9 + 7
X = int(input())
for i in range(1000):
    for j in range(-1000,1000):
        #print (i**5 - j**5)
        if i**5 - j**5 == X:
            print (i,j)
            exit()
   