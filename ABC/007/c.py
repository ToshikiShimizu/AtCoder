import sys
import queue
input = sys.stdin.readline
sys.setrecursionlimit(int(1E+7))
dxdy = ((-1,0), (1,0), (0,-1), (0,1))
R, C = map(int,input().split())
sy, sx = map(int,input().split())
gy, gx = map(int,input().split())
maze = []
visited = [ [0]*C for _ in range(R)]
for r in range(R):
    s = input()
    maze.append(s)
q = queue.Queue()
q.put((sx-1,sy-1,0))
while(not q.empty()):
    y, x, d = q.get()
    if x == gx-1 and y == gy-1:
        ans = d
        break
    if visited[y][x] == 1:
        continue
    else:
        visited[y][x] = 1
        for dx, dy in  dxdy:
            if (0<= x+dx < C) and (0<= y+dy < R):                
                if visited[y+dy][x+dx] == 0 and maze[y+dy][x+dx]=='.':
                    q.put((y+dy,x+dx,d+1))
print (ans)