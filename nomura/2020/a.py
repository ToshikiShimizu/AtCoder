h1,m1,h2,m2,K = map(int,input().split())
ans = h2*60+m2 - (h1*60+m1)
ans = max(0,ans-K)
print (ans)