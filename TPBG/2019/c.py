#coding:utf-8
N = int(input())
S = input()
lb = 0
lw = 0
rb = S.count("#")
rw = S.count(".")
ans = lb + rw
for i in range(N):
    if S[i] == "#":
        lb += 1
        rb -= 1
    else:
        lw += 1
        rw -= 1
    ans = min(ans,lb+rw)
print (ans)
