import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**7)
INF = 10**10
MOD = 10**9 + 7

        



N, M, Q  = map(int,input().split())
query = []
for q in range(Q):
    a,b,c,d = map(int,input().split())
    a-=1
    b-=1
    query.append((a,b,c,d))




old = []
for i in range(1,M+1):
    old.append([i])

for j in range(N-1):
    new = []
    for e in old:
        for i in range(e[-1],M+1):
            new.append(e+[i])
    old = new


#print (new)
mx = 0
for n in new:
    score = 0
    for a,b,c,d in query:
        if (n[b] - n[a] == c):
            score += d
    mx = max(score,mx)
print (mx)