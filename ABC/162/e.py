MOD = int(1e+9 + 7)
N, K = map(int, input().split())
 
cnt = [0] * (K + 1) # 要素が全てXの倍数となるような数列の個数をXごとに求める
for x in range(1, K + 1):
    cnt[x] = pow(K // x, N, MOD)

for x in range(K, 0, -1): # 2X, 3Xの個数を求めてひく
    for i in range(2, K // x + 1):
        cnt[x] -= cnt[x * i]
ans = 0
for k in range(K+1):
    ans += cnt[k] * k
ans = ans % MOD
print(ans)