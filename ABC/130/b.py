#coding:utf-8
n,x = map(int,input().split())
L = list(map(int, input().split()))
sm = 0
for i in range(n):
    sm += L[i]
    #print (sm,x)
    if sm > x:
        print(i+1)
        exit()
print (n+1)

