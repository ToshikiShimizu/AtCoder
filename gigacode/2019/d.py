import itertools
def transpose(mat):
    return list(zip(*mat))
H, W, K, V = map(int, input().split())
A = [[0] * (W+1)]

for h in range(H):
    a = list(map(int,input().split()))
    a = [0] + a
    A.append(a)

B = []
for a in A:
    csum = list(itertools.accumulate(a))
    B.append(csum)
B = transpose(B)

csum_mat = []
for a in B:
    csum = list(itertools.accumulate(a))
    csum_mat.append(csum)
csum_mat = transpose(csum_mat)

ans = 0
for h1 in range(H):
    if ((H-h1) * W < ans):
        continue
    ch1 = csum_mat[h1] # メモ
    for h2 in range(h1,H+1):
        if ((h2-h1) * W < ans):
            continue
        h2h1 = h2 - h1 # メモ
        ch2 = csum_mat[h2] # メモ
        for w1 in range(W):
            if (h2h1 * (W-w1) < ans):
                continue
            h2w1h1w1 =  - ch2[w1] + ch1[w1] # メモ
            for w2 in range(w1,W+1):
                s = h2h1 * (w2-w1) # 面積
                if (s < ans):
                    continue
                cost = ch2[w2] - ch1[w2] + h2w1h1w1
                cost += K * s
                if (cost <= V):
                    ans = s
print (ans)
