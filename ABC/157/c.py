N, M = map(int, input().split())
cand = ['*'] * N
mn = ''
for m in range(M):
    s, c = map(int, input().split())
    if s==1 and c==0 and N > 1:
        mn = '-1'

    if cand[s-1] == '*' or cand[s-1] == str(c):
        cand[s-1] = str(c)
    else:
        mn = '-1'
if mn == '-1':
    print (mn)
    exit()

for i in range(N):
    if cand[i]=='*':
        if i==0 and N > 1:
            mn+='1'
        else:
            mn+='0'
    else:
        mn+=cand[i]
print (mn)