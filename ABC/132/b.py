#coding:utf-8
N = int(input())
P = list(map(int,input().split()))
sm = 0
for i in range(len(P)-2):
    sm += int(sorted(P[i:i+3])[1]==P[i+1])
print (sm)

