N = int(input())
A = list(map(int, input().split()))
MOD = 1000000007
cnt = [0,0,0]
ans = 1
for a in A:
    idx = []
    for i in range(3):
        if cnt[i] == a:
            idx.append(i)
    if len(idx)==0:
        print(0)
        exit()
    cnt[idx[0]]+=1
    ans *= len(idx)
    ans %= MOD
print (ans)