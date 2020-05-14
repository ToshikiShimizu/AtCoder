dxdy = ((0,1),(0,-1),(1,0),(-1,0))

H, W = map(int,input().split())
S = []

S.append('.'*(W+2))
for h in range(H):
    s = input()
    S.append('.'+s+'.')
S.append('.'*(W+2))

#print (S)

for h in range(1,H+1):
    for w in range(1,W+1):
        if S[h][w] == '.':
            continue
        ok = False
        for dx,dy in dxdy:
            if S[h+dx][w+dy] == '#':
                ok = True
                break
        if ok == False:
            print ('No')
            exit()
print ('Yes')

