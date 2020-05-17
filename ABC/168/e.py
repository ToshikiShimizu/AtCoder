import math
MOD = 1000000007
N = int(input())
d_p = dict()
d_m = dict()
zz = 0
for n in range(N):
    a,b = map(int,input().split())

    if a==0 and b==0:
        zz += 1
        continue
    if a==0:
        n_sign = 0
    elif b==0:
        n_sign = 1
    
    else:    
        n_sign = ((a<0) + (b<0))%2
        a = abs(a)
        b = abs(b)
        gcd = math.gcd(a,b)
        a//=gcd
        b//=gcd
        

        #print(n_sign,a,b)
    # print(n_sign,a,b)


    if n_sign==1:
        s =str(b/a)
        d_m[s] = d_m.get(s,0) + 1
    elif n_sign==0:
        s =str(a/b)
        d_p[s] = d_p.get(s,0) + 1      
    
print (d_p,d_m)

ans = 1
for k,v in d_m.items():
    if k in d_p:
        ans *= (2**v + 2**d_p[k] - 1)
        
        d_p.pop(k)
    else:
        ans *= 2**v
    ans %= MOD

for k,v in d_p.items():
    ans *= 2**v
    ans %= MOD
ans -= 1
ans += zz
ans %= MOD
print (ans)
