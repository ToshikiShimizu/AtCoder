import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**7)
INF = 10**10
MOD = 10**9 + 7
N = int(input())
A = list(map(int,input().split()))

minus = []
plus = []
for i in range(len(A)):
    minus.append(A[i]-(i+1))
    plus.append(-A[i]-(i+1))
minus.sort()
plus.sort()
#print (minus)
#print (plus)
minus.append(INF)
plus.append(INF)
i=0
j=0
ans=0
while(i!=N and j!=N):
    
    if minus[i] < plus[j]:
        i+=1
    elif minus[i] > plus[j]:
        j+=1
    else:
        ci = 1
        cj = 1
        #print (minus[i],plus[j],ans,i,j)
        while(minus[i+1] == minus[i]):
            i+=1
            ci += 1
        while(plus[j+1] == plus[j]):
            j+=1
            cj += 1
        i+=1
        j+=1
        ans += ci*cj
    
print (ans)

