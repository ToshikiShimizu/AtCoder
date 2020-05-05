MOD = 10**9+7
def factorize(N):
    n = N
    fact = []
    for i in range(2,int(N**0.5)+1): # intに変換すること
        while(n%i==0):
            n //= i #  整数除算(//)を使うこと
            fact.append(i)
    if n!=1:
        fact.append(n)
    return fact
N = int(input())
cnt = [0] * (N+1)
for n in range(1,N+1):
    fact = factorize(n)
    for f in fact:
        cnt[f] += 1

ans = 1
for n in range(N+1):
    ans *= (cnt[n]+1)
    ans %= MOD
print (ans)