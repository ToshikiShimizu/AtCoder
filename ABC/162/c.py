import math
from functools import lru_cache

ls_gcd  = [[None for _ in range(201)] for _ in range(201)]
for i in range(201):
    for j in range(201):
        ls_gcd[i][j] = math.gcd(i,j)

K = int(input())
ans = 0
for i in range(K):
    for j in range(K):
        ab = ls_gcd[i+1][j+1]
        t = ls_gcd[ab]
        for k in range(K):
            ans += t[k+1]
print (ans)