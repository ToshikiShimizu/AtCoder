import sys
import queue
input = sys.stdin.readline
sys.setrecursionlimit(int(1E+7))
dxdy = ((-1,0), (1,0), (0,-1), (0,1))
H, W = map(int,input().split())
maze = []
visited = [ [0]*W for _ in range(H)]
black = 0
for h in range(H):
    s = input()
    maze.append(s)
    for c in s:
        if c=='#':
            black += 1
q = queue.Queue()
q.put((0,0,0))
cost = -1
while(not q.empty()):
    y, x, d = q.get()
    if x == W-1 and y == H-1:
        cost = d
        break
    if visited[y][x] == 1:
        continue
    else:
        visited[y][x] = 1
        for dx, dy in  dxdy:
            if (0<= x+dx < W) and (0<= y+dy < H):                
                if visited[y+dy][x+dx] == 0 and maze[y+dy][x+dx]=='.':
                    q.put((y+dy,x+dx,d+1))
if cost==-1:
    print (-1)
else:
    print (H*W-cost-1-black)