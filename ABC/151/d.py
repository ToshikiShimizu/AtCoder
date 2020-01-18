#coding:utf-8
import numpy as np
from collections import deque

H, W = map(int, input().split())
maze = []
for h in range(H):
    ls = input()
    maze.append(ls)


def bfs(x,y):
    visited = np.zeros((H,W))
    dist = 0
    queue = deque()
    queue.append((x,y,0))
    while(queue):
        x,y,d = queue.popleft()
        if not visited[x][y]:
            dist = max(dist, d)
            visited[x][y] = 1
            for dx, dy in [(1,0),(-1,0),(0,1),(0,-1)]:
                if (0 <= x+dx and x+dx < H and 0 <= y+dy and y+dy < W):
                    if maze[x+dx][y+dy] == '.' and visited[x+dx][y+dy] == 0:
                        queue.append((x+dx, y+dy, d+1))
    return dist

ans = 0
for h in range(H):
    for w in range(W):
        if maze[h][w]==".":
            ans = max(ans, bfs(h,w))

print (ans)