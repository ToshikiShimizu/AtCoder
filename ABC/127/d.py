import heapq
N, M = map(int,input().split())
A = list(map(int,input().split()))
heapq.heapify(A)
ls_BC = []
for m in range(M):
    ls_BC.append(list(map(int,input().split())))
ls_BC = sorted(ls_BC, key=lambda x: x[1],reverse=True)
for B,C in ls_BC:
    for b in range(B):
        if C > A[0]:
            heapq.heappushpop(A,C)
        else:
            break
print (sum(A))

