N = 55556
dp = [1] * (N+1)
dp[0] =  dp[1] =  0

for i in range(2,N+1):
    if dp[i]:
        for j in range(i*i, N+1, i):
            dp[j] = 0
five_prime = []
for i in range(N):
    if dp[i] == 1:
        if i%5==1:
            five_prime.append(str(i))
N = int(input())
print (' '.join(five_prime[:N]))
