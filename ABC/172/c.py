import itertools
N,M,K = map(int,input().split())
A = [0]+list(map(int,input().split()))
B = [0]+list(map(int,input().split()))
SA = list(itertools.accumulate(A))
SB = list(itertools.accumulate(B))
ans = 0
j = len(B)-1
for i in range(len(SA)):
    while(j>=0):
        if SA[i] + SB[j] <= K:
            ans = max(ans,i+j)
            break
        j-=1
print (ans)



