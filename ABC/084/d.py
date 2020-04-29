import bisect
N = 10**6
dp = [0] * (N+1)
dp[0], dp[1] = 1, 1
prime = []
for i in range(2,N+1):
    if dp[i]==0:
        prime.append(i)
        for j in range(N//i+1):
            dp[j*i] = 1

like2017 = []
for p in prime:
    query = (p+1)//2
    idx = bisect.bisect_left(prime, query)
    if prime[idx] == query:
        like2017.append(p)
    

Q = int(input())
for q in range(Q):
    l, r = map(int,input().split())
    l = bisect.bisect_left(like2017, l)
    r = bisect.bisect_right(like2017, r)
    print (r-l)