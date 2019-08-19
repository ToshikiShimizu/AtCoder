N, M = map(int,input().split())
ls = []
for m in range(M):
    p, y = map(int,input().split())
    ls.append([p,y])
sorted_ls = sorted(ls,key=lambda x:x[1])
counter = [0 for i in range(N+1)]
d = {}
for p,y in sorted_ls:
    counter[p]+=1
    num = counter[p]
    d[y] = num
for p,y in ls:
    #print (p,d[y])
    print (str(p).zfill(6)+str(d[y]).zfill(6))

