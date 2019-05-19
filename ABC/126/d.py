def BFS(K,edges,N):
  roots=[ [] for i in range(N)]
  for a,b,c in edges:
    roots[a-1]+=[(b-1,c)]
    roots[b-1]+=[(a-1,c)]
  dist=[-1]*N
  stack=[]
  stack.append(K)
  dist[K]=0
  while stack:
    label=stack.pop(-1)
    for i,c in roots[label]:
      if dist[i]==-1:
        dist[i]=dist[label]+c
        stack+=[i]
  return [i%2 for i in dist]
N = int(input())
edges = []
for n in range(N-1):
    a,b,c = map(int, input().split())
    edges.append([a,b,c])
ans = BFS(0,edges,N)
for a in ans:
    print (a)
