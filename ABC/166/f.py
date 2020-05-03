import sys
import queue

q = queue.Queue()
sys.setrecursionlimit(10**7)
INF = 10**10
MOD = 10**9 + 7
S = []
history = []
N, A, B ,C = map(int,input().split())
d = {}
d['A'] = A
d['B'] = B
d['C'] = C

for n in range(N):
    s = input()
    S.append(s)

def select(L,R,x): # xを選択した場合の処理
    diff = 1
    if x==R:
        diff = -1
    d[L] += diff
    d[R] -= diff
    history.append(x)

for n in range(N):
    L, R = S[n]
    if d[L] >= 2: # 2以上なら無条件で引いて良い
        select(L,R,R)
    elif d[L] == 0: # 0なら無条件で足すしかない。それができないならNo
        if d[R] == 0:
            print ('No')
            exit()
        else:
            select(L,R,L)
    elif d[L] == 1:
        if d[R] >= 2: # 2以上なら無条件で引いて良い
            select(L,R,L)
        elif d[R] == 0: # 0なら無条件で足すしかない
            select(L,R,R)
        elif d[R] == 1:
            if n!=N-1: # 最後のクエリでない場合
                if L in S[n+1]: # 次のクエリに出現する方に足しておく
                    select(L,R,L)
                else:
                    select(L,R,R)
            else: # 最後のクエリなら
                select(L,R,L) # どちらでもOK
print ('Yes')
for h in history:
    print (h)