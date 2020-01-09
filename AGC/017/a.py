#coding: utf-8
"""
- Aは奇数か偶数かだけ分かれば良い
- Pが0でも1でも計算内容はそんなに変わらない
奇数がk個のとき、P=1の解はどうなるか
1 1C1
2 2C1
3 3C1+3C3
4 4C1+4C3
5 5C1+5C3+5C5
にそれぞれ2^(偶数の数)
"""
from math import factorial
def comb(n, r):
    return factorial(n) // factorial(r) // factorial(n - r)
n, p = map(int, input().split())
A = list(map(int, input().split()))
even = 0
odd = 0
for a in A:
    if a%2==0:
        even+=1
    else:
        odd+=1
ans = 0
for k in range(1,odd+1,2):
    ans += comb(odd,k)
ans *= 2**even
if p==0:
    print (2**n-ans)
else:
    print (ans)