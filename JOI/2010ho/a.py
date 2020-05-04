import itertools
MOD = 10**5
N, M = map(int, input().split())
D = [0]
for n in range(N-1):
    d = int(input())
    D.append(d)
C = []
for m in range(M):
    c = int(input())
    C.append(c)


csum = list(itertools.accumulate(D))
cur = 1
ans = 0
for c in C:
    next = cur + c
    ans += abs(csum[next-1]-csum[cur-1])
    cur = next
    ans %= MOD
print (ans)