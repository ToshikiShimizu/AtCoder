S = input()
MOD = 2019
cnt = [0]*MOD
cur = 0 # 現在考えている部分文字列
cnt[cur] = 1 # 部分文字列'0'も作れると考える
d = 1 # 位を表す
for s in S[::-1]:
    cur += int(s)*d # 新たな桁を追加
    cur %= MOD
    cnt[cur] += 1
    # 後処理
    d *= 10 # 位を上げる
    d %= MOD # ただし数が巨大になるため、計算量を減らすために剰余をとる
ans = 0
for c in cnt:
    ans += c*(c-1)//2
print (ans)

