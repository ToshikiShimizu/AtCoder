#coding:utf-8
K, A , B = map(int,input().split())
n = 1
if  A >= B:
    print (K+n)
elif K <=  A:
    print (K+n)
else:
    K -= (A-1)
    n += (A-1)
    if (B-A) > 2:
        n += int(K/2)*(B-A) + K % 2
    else:
        n += K
    print (n)
