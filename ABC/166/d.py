import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**7)
INF = 10**10
MOD = 10**9 + 7
X = int(input())
MAX_X = 10**9
a_max = 0
while(1):
    a_max+=1
    if a_max**5 - (a_max-1)**5 > MAX_X:
        break
b_min = 0
while(1):
    b_min-=1
    if -(b_min)**5 > MAX_X:
        break
#print (a_max, b_min)
for i in range(a_max):
    for j in range(b_min+1,a_max-1):
        if i**5 - j**5 == X:
            print (i,j)
            exit()
   