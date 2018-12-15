import math
N = int(input())
A = sorted([int(_) for _ in input().split()], reverse=True)
dp = {}
for a in A:
    dp[a] = dp.get(a, 0) + 1
print (dp)
ans = 0
for a in A:
    print (a)
    if dp[a]:
        dp[a] -= 1
        if dp.get(2**int(math.log2(a) + 1) - a, 0) > 0:
            dp[2**int(math.log2(a) + 1) - a] -= 1
            ans += 1
print(ans)
