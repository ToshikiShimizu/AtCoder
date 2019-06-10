N, M = map(int, input().split())
MOD = 10 ** 9 + 7
ng = set([int(input()) for _ in range(M)])
ans = [0, 1] 
for i in range(1, N+1):
  if i in ng:
    ans.append(0)
  else:
    ans.append((ans[-2] + ans[-1]) % MOD)
print(ans[-1] % MOD)

