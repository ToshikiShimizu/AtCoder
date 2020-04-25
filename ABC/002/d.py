from itertools import combinations
N, M = map(int, input().split())
link = [[0 for i in range(N)] for j in range(N)]
for m in range(M):
    x, y = map(int, input().split())
    link[x-1][y-1] = 1
    link[y-1][x-1] = 1

for i in range(N,1,-1):
    for comb in combinations(range(N),i):
        for c in combinations(comb, 2):
            if (link[c[0]][c[1]] == 0):
                break
        else:
            print (i)
            exit()
print (1)