#from math import gcd
from fractions import gcd
from functools import reduce

def lcm(a,b):
    return a * b // gcd(a,b)
def ls_lcm(A):
    return reduce(lcm ,A)
def ls_gcd(A):
    return reduce (gcd, A)

def check_two(A):
    old = None
    for n in A:
        cnt = 0
        while(n & 1 == 0):
            cnt += 1
            n = n >> 1
        if old is None:
            old = cnt
        else:
            if old!=cnt:
                return False
    return True

N, M = map(int, input().split())
A = list(map(int, input().split()))
if not check_two(A):
    print (0)
    exit()
A = [a//2 for a in A]
half = ls_lcm(A)
print ((M + half) // (2*half))