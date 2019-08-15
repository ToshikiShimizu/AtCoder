import heapq
N,M = map(int,input().split())
ls = []
h = []
ans = 0
for n in range(N):
    ls.append(list(map(int,input().split())))
ls = sorted(ls,key=lambda ls:ls[0],reverse=False)
n = 0
for m in range(1,M+1):
    while(n<N and ls[n][0]<=m ):
        heapq.heappush(h, -ls[n][1])
        n+=1
    if len(h)>0:
        ans -= heapq.heappop(h)
print (ans)