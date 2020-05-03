MOD = 10**9+7
n = int(input())
k = int(input())
MX = 2 * 10**5
fact = [1] * (MX+1) # 階乗を格納するリスト
factinv = [1] * (MX+1) # 階乗の逆元を格納するリスト
for i in range(MX):
    fact[i+1] = fact[i] * (i+1) % MOD # 階乗を計算
    factinv[i+1] = pow(fact[i+1], MOD-2, MOD)# MODを法とした逆元
ans = fact[n+k-1] * factinv[k] * factinv[n-1]
print (ans%MOD)