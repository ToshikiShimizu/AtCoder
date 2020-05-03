import sys
import queue

q = queue.Queue()
sys.setrecursionlimit(10**7)
INF = 10**10
MOD = 10**9 + 7
S = []
N, A, B, C = map(int,input().split())
ABC = 'ABC'
q = queue.Queue()
cnt = [A,B,C]
h = ''
q.put((cnt,0,h))
for n in range(N):
    s = input()
    s = s.replace('A','0').replace('B','1').replace('C','2')
    s = list(s)
    S.append(s)


i = 0
#print (S)
while(not q.empty()):
    cnt,d,h = q.get()
    
    #print (cnt,d,h)
    if (d > i):
        i+=1
        if (i==len(S)):
            print ('Yes')
            for k in h:
                print (k)
            exit()
    l,r = S[i]
    l  = int(l)
    r  = int(r)
    if (cnt[l] > 0):
        cnt_ = cnt[:]
        cnt_[l]-=1
        cnt_[r]+=1
        q.put((cnt_,d+1,h+ABC[r]))
        # cnt[l]+=1
        # cnt[r]-=1
    if (cnt[r] > 0):
        cnt_ = cnt[:]
        cnt_[r]-=1
        cnt_[l]+=1
        q.put((cnt_,d+1,h+ABC[l]))
        # cnt[r]+=1
        # cnt[l]-=1
print ('No') 