S = input()
S+='*'
sm = 0
ans = 0
for s in S:
    if s in ('A','C','G','T'):
        sm += 1
    else:
        ans = max(ans, sm)
        sm = 0
print (ans)