from math import gcd


k = int(input())
for i in range(1, 2*10**6+1):
    g = gcd(k, i)
    k //= g
    if(k == 1):
        print(i)
        exit()
print(k)
