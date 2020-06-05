M = int(input())
S = 0
C = 0
for m in range(M):
    d, c= map(int, input().split())
    S += d*c
    C += c
print ((C-1)+(S-1)//9)