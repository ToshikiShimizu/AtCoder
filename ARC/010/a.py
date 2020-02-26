N, M, A, B = map(int, input().split())
usage = []
for m in range(M):
    usage.append(int(input()))

for i,u in enumerate(usage):
    if N <= A:
        N += B
    N -= u
    if N < 0:
        print (i+1)
        exit()
print ('complete')
