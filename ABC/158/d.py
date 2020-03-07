from collections import deque
d = deque()
s = input()
d.append(s)
rev = 0

Q = int(input())

for q in range(Q):
    ls = input().split()
    #print (ls)
    if ls[0] == '1':
        rev = (rev + 1) % 2
    else:
        if (int(ls[1]) + rev) % 2 == 0:
            d.append(ls[2])
        else:
            d.appendleft(ls[2])

ans = ''.join(list(d))
if rev == 1:
    ans = ans[::-1]
print (ans)
