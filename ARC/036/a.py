#coding:utf-8
N, K = map(int,input().split())
T = []
for n in range(N):
    T.append(int(input()))
for n in range(N-2):
    if sum(T[n:n+3]) < K:
        print (n+3)
        exit()
print (-1)