#coding:utf-8
N = int(input())
D = list(map(int,input().split()))
D = sorted(D)
idx = len(D) // 2
print(D[idx] - D[idx-1])