import bisect
N = int(input())
cards = []
for n in range(N):
    cards.append(int(input()))
INF = 100010
lis = [INF]* (N+1)
lis[0] = 0
ans = 0
for n in range(N):
    i = bisect.bisect(lis, cards[n])
    lis[i] = cards[n]
    ans = max(ans, i)
print(N-ans)