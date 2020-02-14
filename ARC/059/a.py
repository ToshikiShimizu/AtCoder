#coding:utf-8
N = int(input())
A = list(map(int, input().split()))

def calc(A,mu):
    return sum([(a-mu)**2 for a in A])
ans = 1e+8
for n in range(-100,201):
    ans = min(ans, calc(A,n))
print (ans)
