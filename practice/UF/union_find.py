# :coding-utf8
class UnionFind:
    def __init__(self, n):
        self.parents = [i for i in range(n)]
        self.sizes = [1] * n
        self.rank = [0] * n

    def find(self, i):
        if self.parents[i] == i:
            return i
        else:
            self.parents[i] = self.find(self.parents[i])
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
