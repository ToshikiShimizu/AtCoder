import numpy as np
H , W = list(map(int, input().split()))
S = np.array([list(input().rstrip()) for _ in range(H)]) == '.'
U = np.zeros((H, W), dtype=int)
D = np.zeros((H, W), dtype=int)
R = np.zeros((H, W), dtype=int)
L = np.zeros((H, W), dtype=int)
for h in range(1, H):
    U[h] = (U[h - 1] + 1) * S[h - 1]
for h in reversed(range(H - 1)):
    D[h] = (D[h + 1] + 1) * S[h + 1]
for w in range(1, W):
    L[:, w] = (L[:, w - 1] + 1) * S[:, w - 1]
for w in reversed(range(W - 1)):
    R[:, w] = (R[:, w + 1] + 1) * S[:, w + 1]
print(np.max((U+D+L+R) * S) + 1)