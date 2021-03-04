a, v= map(int,input().split())
b, w= map(int,input().split())
t = int(input())
if b < a:
    a,b = b,a
if a+v*t >= b+w*t:
    print('YES')
else:
    print('NO')