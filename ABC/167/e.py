N,M,K = map(int,input().split())
MOD = 998244353
ans = 0

fact = [1] * (N+1) # 階乗を格納するリスト
factinv = [1] * (N+1) # 階乗を格納するリスト
for i in range(N):
    fact[i+1] = fact[i] * (i+1) % MOD # 階乗を計算
    factinv[i+1] = pow(fact[i+1], MOD-2, MOD)# MODを法とした逆元

def nCk(n,k): # 組み合わせ(MOD)を返却する
    return fact[n] * factinv[n-k] * factinv[k] % MOD

def solve(k):
    r = M * pow(M-1,N-1-k,MOD) * nCk(N-1,k)
    return r

for k in range(K+1):
    ans += solve(k)
    ans %= MOD
print (ans)