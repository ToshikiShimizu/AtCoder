import itertools
import math
MOD = 1000000007
def P(n, r):
  return math.factorial(n)//math.factorial(n-r)
def C(n, r):
  return P(n, r)//math.factorial(r)% MOD
def X(n, r):
  try:
    return C(n-1,n-r) 
  except:
    return 0
N,K = map(int,input().split())

for i in range(1,K+1):
  if (1==i and K==N):
    print (1)
  else:
    print (X(K,i)*((X(N-K,i+1)+2*X(N-K,i)+X(N-K,i-1)))% MOD)
