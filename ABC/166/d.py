import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**7)
INF = 10**10
MOD = 10**9 + 7
X = int(input())
MAX_X = 10**9
n = 0
while(1):
    n+=1
    if n**5 - (n-1)**5 > MAX_X:
        break
for i in range(n):
    for j in range(-n+1,n-1):
        if i**5 - j**5 == X:
            print (i,j)
            exit()
   