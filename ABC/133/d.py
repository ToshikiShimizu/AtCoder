N = int(input())
A = list(map(int, input().split()))
sm = sum(A)
x = sm-2*sum(A[1::2])
X = []
X.append(str(x))
for i in range(N-1):
   x = 2*A[i]-x
   X.append(str(x))
print (" ".join(X))