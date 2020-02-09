#coding:utf-8
N, K = map(int,input().split())
P = list(map(int,input().split()))
P = [(p+1)/2 for p in P]
mx = sum(P[:K])
sm = sum(P[:K])
for i in range(N-K):
    sm = sm - P[i] + P[K+i]
    mx = max(mx,sm)
print (mx)