
K = int(input())
A = 15
L = 10
B = 100
ans = [K * A, (K//L + 1) * B, K // L * B + (K % L) * A]
print(min(ans))
