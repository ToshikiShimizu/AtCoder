N, A, B = map(int,input().split())
ans = (N // (A+B)) * A
N = N % (A+B)
ans += min(A,N)
print (ans)