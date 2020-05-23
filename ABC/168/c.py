import math
A,B,H,M = map(int,input().split()) 
H = (H+M/60)*30
M *= 6
d = abs(H-M)
if d > 180:
    d = 360 - d
C = pow(A**2+B**2-2*A*B*math.cos(math.radians(d)),0.5)
print(C)