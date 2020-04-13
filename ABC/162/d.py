N = int(input())
S = input()
ans = S.count('R') * S.count('G') * S.count('B')

for i in range(N):
    for j in range(1,N):
        if (i-j<0 or i+j>=N):
            break
        l = S[i-j]
        m = S[i]
        r = S[i+j]
        if l!=m and m!=r and r!=l:
            ans -= 1
print (ans)
