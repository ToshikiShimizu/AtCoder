class UnionFind:
    def __init__(self, n):
        self.nodes = n
        self.parents = [i for i in range(n)]
        self.sizes = [1] * n
        self.rank = [0] * n

    def find(self, i):
        if self.parents[i] == i:
            return i
        else:
            self.parents[i] = self.find(self.parents[i]) # 経路圧縮
            return self.parents[i]

    def unite(self, i, j):
        pi = self.find(i)
        pj = self.find(j)
        if pi != pj:
            if self.rank[pi] < self.rank[pj]:
                self.sizes[pj] += self.sizes[pi]
                self.parents[pi] = pj
            else:
                self.sizes[pi] += self.sizes[pj]
                self.parents[pj] = pi
                if self.rank[pi] == self.rank[pj]:
                    self.rank[pi] += 1
    def same(self, i, j):
        return self.find(i)==self.find(j)

    def get_parents(self):
        for n in range(self.nodes): # findで経路圧縮する
            self.find(n)
        return self.parents

adj = []
N, M = map(int,input().split())
for m in range(M):
    a,b = map(int,input().split())
    adj.append([a-1,b-1])

ans = 0
for i in range(M): # 取り除く辺番号
    uf = UnionFind(N)
    for j in range(M):
        if (i==j): # 辺を追加しない（取り除く）
            continue
        uf.unite(*adj[j])
    
    if len(set(uf.get_parents()))!=1: # 複数の集合にわかれているか確認
        ans += 1
print (ans)