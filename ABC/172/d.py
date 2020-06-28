N = int(input())
ans = 0
for X in range(1, N+1):
  Y = N // X
  ans += Y * (Y + 1) // 2 * X
print(ans)
