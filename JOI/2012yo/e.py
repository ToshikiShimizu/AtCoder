import sys
import queue
dxdy_odd = ((-1,0), (1,0), (0,-1), (0,1), (1,-1), (1,1)) # タプルやリストで持っておくと便利
dxdy_even = ((-1,0), (1,0), (0,-1), (0,1), (-1,-1), (-1,1)) # タプルやリストで持っておくと便利
W, H = map(int,input().split())

mp = []
mp.append([0]*(W+2))
for h in range(H):
    s = list(map(int, input().split()))
    mp.append([0]+s+[0])
mp.append([0]*(W+2))

visited = [ [0]*(W+2) for _ in range(H+2)]

ans = 0
q = queue.Queue()
q.put((0,0)) # スタート地点をenqueue
while(not q.empty()):
    y, x = q.get()
    if visited[y][x] == 1: # 訪問済みの場合は無視する
        continue
    else:
        visited[y][x] = 1 # 訪問フラグを立てる
        if y%2 == 0:
            dxdy = dxdy_even
        else:
            dxdy = dxdy_odd
        for dx, dy in  dxdy:
            if (0<= x+dx < W+2) and (0<= y+dy < H+2): # 範囲内に収まっているか  
                if mp[y+dy][x+dx]==1:
                    ans += 1
                else:
                    if visited[y+dy][x+dx]==0:
                        q.put((y+dy,x+dx))
print (ans)
