N,K = map(int,input().split())
A = [0] + list(map(int,input().split()))
d = dict()
c = 1
loop = False
k = 0
while(k<K):

    if not loop and str(c) in d:
        T = k-d[str(c)]
        a =  max((((K-k) // T)) - 1,0)
        k += a*T
        loop = True
    d[str(c)] = k
    c = A[c]
    k+=1
print (c)