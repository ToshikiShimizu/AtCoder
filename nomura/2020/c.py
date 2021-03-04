N = int(input())
A = list(map(int,input().split()))
P = [2**i for i in range(len(A))]
import sys
sys.setrecursionlimit(10**9)


if N==0 and A[0]==1:
    print(1)
    exit()
if A[0] > 0:
    print(-1)
    exit()

ans = [0]
node = [0]
def rec(i):
    if i==0:
        ans[0]+=1
        return 1
    node[0] = node[0] + A[i]
    node[0] = min(node[0], 2*rec(i-1))
    ans[0] += node[0]

    if (i!=N and node[0] - A[i] <= 0) or (node[0] - A[i] < 0):
        print(-1)
        exit()
    return node[0] - A[i]
rec(N)
print (ans[0])