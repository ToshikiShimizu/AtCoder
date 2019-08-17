N = int(input())
A = list(map(int,input().split()))
B = [0 for i in range(N)]
for n in range(N):
    step = N - n
    sm = A[step-1]
    for i in range(step-1, N ,step)[::-1]:
        sm += B[i]
    B[step-1] = (sm%2)
    #print (B)
print (sum(B))
C = " ".join([str(i+1) for i in range(len(B)) if B[i]])
print (C)
