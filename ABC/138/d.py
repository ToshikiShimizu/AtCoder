import sys
input = sys.stdin.readline
sys.setrecursionlimit(int(1E+7))
def main():
    N, Q = map(int, input().split())
    link = [[] for _ in range(N+1)]
    for n in range(N-1):
        a, b = map(int, input().split())
        link[a].append(b)
        link[b].append(a)
    V = [0] * (N+1)
    ans = [0] * (N+1)
    for q in range(Q):
        p, x = map(int, input().split())
        V[p] += x

    def dfs(i, parent, acc):
        V[i] += acc
        for j in link[i]:
            if j != parent:
                dfs(j,i,V[i])
    cur = 1
    parent = 0
    acc = 0
    dfs(cur, parent , acc)
    V = [str(v) for v in V]
    print (" ".join(V[1:]))

if __name__ == '__main__':
    main()
