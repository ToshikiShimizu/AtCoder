N = int(input())
A = list(map(int, input().split()))
d = dict()
for a in A:
    v = d.get(a, 0)
    d[a] = v+1
S = sum(A)
Q = int(input())
B = []
C = []
for q in range(Q):
    b, c = map(int,input().split())
    v = d.get(b, 0)
    S += v*(c-b)
    d[b] = 0
    d[c] = d.get(c,0) + v
    print (S)