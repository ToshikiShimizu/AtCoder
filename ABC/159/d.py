import collections
import math
def C(n):
    return n * (n-1) // 2
N = int(input())
A = list(map(int,input().split()))
c = collections.Counter(A)
d = {}
sm = 0
for k,v in c.most_common():
    d[k] = v
    sm += C(v)
for a in A:
    print (sm - C(d[a]) + C(d[a]-1))
