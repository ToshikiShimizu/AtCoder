import itertools
N, M, Q  = map(int,input().split())
query = []
for q in range(Q):
    a,b,c,d = map(int,input().split())
    a-=1
    b-=1
    query.append((a,b,c,d))
mx = 0
for comb in itertools.combinations_with_replacement([i for i in range(1,M+1)],N):
    score = 0
    for a,b,c,d in query:
        if (comb[b] - comb[a] == c):
            score += d
    mx = max(score,mx)
print (mx)


