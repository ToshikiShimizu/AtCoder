from functools import reduce
N = input()
A = list(map(int,input().split()))
S = reduce(lambda x, y : x ^ y, A)
ans = [str(S^a) for a in A]
print (' '.join(ans))