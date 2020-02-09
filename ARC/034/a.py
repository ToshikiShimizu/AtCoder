#coding:utf-8
N = int(input())
mx = 0
for n in range(N):
    a,b,c,d,e = map(int, input().split())
    mx = max(mx, a+b+c+d+e*110/900)
print (mx)
