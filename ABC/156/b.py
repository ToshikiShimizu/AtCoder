N, K = map(int, input().split())

for i in range(40):
    if (N < K**i):
        print (i)
        break