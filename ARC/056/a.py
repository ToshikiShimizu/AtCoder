A, B, K, L = map(int, input().split())
ans = [K * A, ( K//L + 1 ) * B, K //L * B + (K % L) * A]
print (min(ans))