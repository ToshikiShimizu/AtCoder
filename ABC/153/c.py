#coding:utf-8
N, K = map(int, input().split())
H = list(map(int, input().split()))
H.sort()
#print (H)
idx = max(len(H)-K,0)
print (sum(H[:idx]))
