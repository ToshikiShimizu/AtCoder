ans = 0
M,D = map(int,input().split())
for d in range(D+1):
    d1 = d%10
    d10 = int(d/10)
    if (d10>1 and d1>1):
        if (d10*d1<=M):
            ans+=1
print (ans)