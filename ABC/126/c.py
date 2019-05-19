#coding:utf-8
N,K = map(int,input().split())
pw = 1
ans = 0
for n in range(1,N+1)[::-1]:
    while(pw * n< K):
        pw *= 2
    #print (pw)
    ans += 1.0/pw
print (ans/N)
