#coding:utf-8
L, R = map(int,input().split())
mn = 1000000000
Y = 2019
if R >= L + Y:
    R = L + Y - 1
for j in range(L,R+1):
    for i in range(L,j):
        mn = min(mn, ((i%Y)*(j%Y))%Y)
print (mn)