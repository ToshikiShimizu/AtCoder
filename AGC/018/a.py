#coding:utf-8
#import math
import fractions
from functools import reduce
n,k = map(int, input().split())
A = list(map(int, input().split()))
gcd = reduce(fractions.gcd, A)
if (min(A)<=k and k<=max(A) and k%gcd==0):
    print ("POSSIBLE")
else:
    print ("IMPOSSIBLE")