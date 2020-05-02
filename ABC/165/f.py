import queue
import bisect
INF = 10**10
N = int(input())
A = list(map(int,input().split()))
adj = [[] for _ in range(N)]
#print (adj)
for n in range(N-1):
    u, v = map(int,input().split())
    u-=1
    v-=1
    adj[u].append(v)
    adj[v].append(u)
#print (adj)

lis = [INF] * N
ans = [INF] * N
ans[0] = 1
q = queue.Queue()
q.put((0,-1,lis,[],[])) # スタート地点をenqueue
while(not q.empty()):
    cur, par, lis, his, X = q.get()
    i = bisect.bisect(lis, A[cur]) # 更新すべき最小値
    lis = lis[:]
    X = X+[i]
    
    lis[i] = A[cur]
    leaf = True
    for next in adj[cur]:
        if next != par:
            # his = his[:]
            # his.append(next)
            q.put((next,cur,lis, his+[next], X))
            leaf = False
    if leaf:
        #print (cur,lis,his,X)
        for i in range(len(his)):
            #print (his[i],lis[i],X[i+1])
            ans[his[i]] = X[i+1]+1
for a in ans:
    print (a)
   
