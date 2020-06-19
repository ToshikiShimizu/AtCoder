import math
a,b,c = map(int,input().split())
def func(t):
    return a * t + b * math.sin(c*t*math.pi)
l = 0
r = 400
for i in range(100):
    mid = (l + r) / 2
    if func(mid)>100:
        r = mid
    else:
        l = mid
print (mid)