from fractions import gcd
from functools import reduce

def lcm(a,b):
    return a * b // gcd(a,b)
def ls_lcm(A):
    return reduce(lcm ,A)
def ls_gcd(A):
    return reduce (gcd, A)

def count_two(n): # 2で割れる回数を取得
    cnt = 0
    while(n & 1 == 0):
        cnt += 1
        n = n >> 1
    return cnt

N, M = map(int, input().split())
A = list(map(int, input().split()))

if len(set([count_two(a) for a in A])) != 1:
    print (0)
    exit()
A = [a//2 for a in A]
half = ls_lcm(A)
print ((M + half) // (2*half))