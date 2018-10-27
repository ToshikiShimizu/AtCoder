#coding:utf-8
a,b,K = list(map(int,input().split()))
k = 0

def op(m,n):
    if m%2==1:
        m-=1
    n += m/2
    m =  m/2
    #print (m,n)
    return int(m),int(n)

while(1):
    if k == K:
        break
    k+=1
    a,b = op(a,b)
    if k == K:
        break
    k+=1
    b,a = op(b,a)
print (a,b)
