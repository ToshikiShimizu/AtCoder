N = int(input())
A = []
B = []
for n in range(N):
    a, b = map(int, input().split())
    A.append(a)
    B.append(b)
A.sort()
B.sort()
am = A[N//2]
bm = B[N//2]

ans = 0
for a,b in zip(A,B):
    ans += abs(a-b)
    ans += abs(a-am)
    ans += abs(b-bm)
print (ans)