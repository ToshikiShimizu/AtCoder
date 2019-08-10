#coding:utf-8
K,X = map(int,input().split())
ls = [str(a) for a in list(range(X-K+1,X+K))]
print (" ".join(ls))
