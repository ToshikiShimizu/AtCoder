import math
MOD = 1000000007
N = int(input())

even = dict() # (+,+), (-,-)
odd = dict() # (+,-), (-,+)
ans = 1
zz = 0 # (0,0)の場合は、その数だけ答えをインクリメントすれば良い

for n in range(N):
    a,b = map(int,input().split())

    if a==0 and b==0:
        zz += 1
        continue
    if a==0:
        n_sign = 0
        b = 0 # こうしておくと後ほど'0/0'として格納される
    elif b==0:
        n_sign = 1
        a = 0 # こうしておくと後ほど'0/0'として格納される

    else:    
        n_sign = ((a<0) + (b<0)) % 2 # -の出現回数が偶数か奇数か
        a = abs(a) # 符号は用済み
        b = abs(b) # 符号は用済み
        gcd = math.gcd(a,b) # 約分のためにGCDを計算
        a//=gcd # 約分
        b//=gcd # 約分

    if n_sign==1:
        s =str(b)+'/'+str(a) # '41/3'のように文字列として扱う
        odd[s] = odd.get(s,0) + 1 # かぞえあげる
    elif n_sign==0:
        s =str(a)+'/'+str(b)
        even[s] = even.get(s,0) + 1      

for k,v in odd.items():
    if k in even: # 共存NGあり
        ans *= (2**v + 2**even[k] - 1)
        even.pop(k) # 辞書から削除
    else: # 共存NGなし
        ans *= 2**v
    ans %= MOD

for k,v in even.items():
    ans *= 2**v # 削除していない分を数える
    ans %= MOD

ans -= 1 # 1匹も選択しないのはNG
ans += zz
ans %= MOD
print (ans)
