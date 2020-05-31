
N = int(input())
P = 10**6
prime = [1] * (P+1) # 素数
prime[0] =  prime[1] =  0

for i in range(2,P+1):
    if prime[i]:
        for j in range(i*i, P+1, i):
            prime[j] = 0
ans = 0
for p in range(P):
    i = 0
    while(1): # 割れるだけ素数の累乗で割る
        i+=1
        v = pow(p,i)
        if (prime[p] == 1 and N%v==0):
            N //= v
            ans += 1
        else:
            break

for p in range(P): # 割れるだけ素数で割る
    while(prime[p] == 1 and N%p==0):
        N //= p

if N!=1: # 1になっていなければ、P以上の素数一つを約数に持つ
    ans += 1
print (ans)



