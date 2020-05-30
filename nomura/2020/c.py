N = int(input())
A = list(map(int,input().split()))
P = [2**i for i in range(len(A))]
import sys
sys.setrecursionlimit(10**9)
# A = A[::-1]
# P = P[::-1]

# ans = 0
# node = 0
# for i in range(len(A)-1):
#     node = node + A[i]
#     node = min(node,2 * (P[i+1] - A[i+1]))
#     ans += node
#     if node <= 0:
#         print (-1)
#         exit()
#     print (node)
    
# ans += 1
# print (ans)

if N==0 and A[0]==1:
    print(1)
    exit()
if A[0] > 0:
    print(-1)
    exit()
# if A[-1] > 2**N:
#     print (-1)
#     exit()

# for a,p in zip(A[::-1],P[::-1]):
#     if a > p:
#         print (-1)
#         exit()

ans = [0]
node = [0]
def rec(i):
    if i==0:
        ans[0]+=1
        return 1
    node[0] = node[0] + A[i]
    node[0] = min(node[0], 2*rec(i-1))
    ans[0] += node[0]
    #print (node[0],node[0]-A[i])

    if (i!=N and node[0] - A[i] <= 0) or (node[0] - A[i] < 0):
        print(-1)
        exit()
    return node[0] - A[i]
rec(N)
print (ans[0])