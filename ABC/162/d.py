from collections import Counter
N = int(input())
S = input()
#c = Counter(S)
#print (c.most_common())
#ls = list(c.values())
ans = S.count('R') * S.count('G') * S.count('B')


for i in range(N):
    for j in range(1,N):
        a = i + j
        b = i + j + j
        if (b >= N):
            break
        else:
            l = S[i]
            m = S[a]
            r = S[b]
            if l!=m and m!=r and r!=l:
                ans -= 1
        # if (i-j<0 or i+j>=N):
        #     break
        # l = S[i-j]
        # m = S[i]
        # r = S[i+j]
        # if l!=m and m!=r and r!=l:
        #     ans -= 1
print (ans)
