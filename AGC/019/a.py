#coding: utf-8
q,h,s,d = map(int, input().split())
n = int(input()) * 4
h = min(h,2*q)
s = min(s,2*h)
d = min(d,2*s)

price = [d,s,h,q]
#print (price)
ans = 0
for i,p in enumerate(price):
    b = int(2**(3-i))
    #print (n,b)
    ans += (n // b) * p
    n = n % b
print (ans)
