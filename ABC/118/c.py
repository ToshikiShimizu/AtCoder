#coding:utf-8
from functools import reduce
def gcd(a, b):
	while b:
		a, b = b, a % b
	return a
N = input()
A = list(map(int,input().split()))
print (reduce(gcd,A))
