N, K = map(int, input().split())
A = []
for n in range(N):
    a = int(input())
    A.append(a)

if 0 in A:
    print(N)
    exit()

right = 0
sm = 1
ans = 0
for left in range(N):
    
    while(right<N and sm*A[right]<=K): # rightをインクリメントでs切るか確認
        sm *= A[right]
        right += 1
        
    ans = max(ans,right-left) # leftに対する条件を満たすパターン数
    if (left == right): # leftがrightを超えないようにする
        right += 1
    else:
        sm /= A[left] # leftの移動準備


print (ans)
