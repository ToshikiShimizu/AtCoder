n,m = map(int,input().split())
n = n % m
print (min(n,m-n))