N = int(input())
A = map(int, input().split())

old = ''
cnt = 0
left = []
for a in A:
    if a==old:
        left.append(cnt)
        cnt = 1
    else:
        cnt += 1
    old = a
left.append(cnt)
left+=[0,0] # 要素数が3以上になることを保証

ans = 0
for i in range(len(left)-2):
    ans = max(ans, sum(left[i:i+3]))
print (ans)