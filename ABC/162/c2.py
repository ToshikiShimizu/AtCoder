from math import gcd
K = int(input())
ans = 0
for i in range(1,K+1):
    for j in range(1,K+1):
        gcd_ij = gcd(i, j)
        for k in range(1,K+1):
            ans += gcd(gcd_ij, k)
print (ans)