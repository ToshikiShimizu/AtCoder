#coding:utf-8
query = ['TAKAHASHIKUN', 'Takahashikun', 'takahashikun']
N = int(input())
W = input().split()
ans = 0
for i,w in enumerate(W):
    if (i==N-1):
        w = w[:-1]
    if w in query:
        ans += 1
print (ans)