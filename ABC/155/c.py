from collections import Counter
N = int(input())
S = []
for n in range(N):
    S.append(input())
c = Counter(S)

K = []
for i,(k,v) in enumerate(c.most_common()):
    if i==0:
        vmax = v
    else:
        if vmax!=v:
            break
    K.append(k)

K = sorted(K)
for k in K:
    print (k)