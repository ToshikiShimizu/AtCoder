N,K = map(int,input().split())
A = [0] + list(map(int,input().split()))
turn = [-1] * (N+1) # いつ訪問したかを記録する
c = 1
for k in range(K):
    if turn[c]!=-1:
        T = k - turn[c] # 周期
        bias = turn[c] # バイアス
        break
    turn[c] = k
    c = A[c]
else:
    print (c)
    exit()

K -= bias # Kを減らしてリスタート
K %= T
K += bias
c = 1 
for k in range(K):
    c = A[c]
print (c)
