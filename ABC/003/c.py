#coding:utf-8
N, K = map(int,input().split())
R = list(map(int,input().split()))
R.sort()
R = R[-K:]
rate = 0
for k in range(K):
    rate = (rate + R[k]) / 2
print (rate)