#coding:utf-8
import fractions
def lcm(x, y):
    return (x * y) // fractions.gcd(x, y)
n,m = map(int,input().split())
s=input()
t=input()
lcm = lcm(n,m)
a = int(lcm/n)
b = int(lcm/m)
for i in range(fractions.gcd(n,m)):
    if s[i*b]==t[i*a]:
        pass
    else:
        print (-1)
        exit()
print (lcm)
