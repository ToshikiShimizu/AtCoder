import math
def C(n, r):
    if n-r < 0:
        return 0
    return math.factorial(n) // (math.factorial(n - r) * math.factorial(r))
N, M = map(int,input().split())
print (C(N,2)+C(M,2))