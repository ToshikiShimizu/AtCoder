#coding:utf-8
MOD = 10 ** 9 + 7
n = int(input())
A = list(map(int, input().split()))
ans = 0
b = 1
for _ in range(60):
    sm = sum(a&b for a in A)
    sm //= b
    ans = (ans + sm * (n-sm) * b) % MOD
    b<<=1
print (ans)