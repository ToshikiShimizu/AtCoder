#coding:utf-8
N = int(input())
A = list(map(int,input().split()))
A.append(0)
A.insert(0,0)
ans = 0
for n in range(N+1):
    ans+=abs(A[n]-A[n+1])
for n in range(N):
    if (min(A[n],A[n+2])<=A[n+1] and A[n+1]<=max(A[n],A[n+2])):
        print (ans)
    else:
        print (ans - 2 * min(abs(A[n+1]-A[n]),abs(A[n+1]-A[n+2])))
