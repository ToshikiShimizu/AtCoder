#coding:utf-8
n,k  = map(int,input().split())
ls_a  = list(map(int,input().split()))
target = int(k*(k+1)/2)
ls_target = []
i = 1
while(1):
    for j in range(i):
        temp = ls_a[j:(len(ls_a)-i+j+1)]
        ls_target.append(sum(temp))
    if i==n:
        break
    i+=1

def check(num):
    for i in range(100):
        if (num < 2**i):
            return i-1, 2**(i-1)
mx = ls_target[0]
digit, mx_bin = check(mx)
ans = 0
for d in range(digit+1):
#    print (mx_bin)
#    print (ls_target)
    new_idx = []
    cnt = 0
    for idx,ls in enumerate(ls_target):
        if ls & mx_bin > 0:
            cnt += 1
            new_idx.append(idx)
    if cnt >= k:
        ls_target = [ls_target[i] for i in new_idx]
        ans += mx_bin
    mx_bin = int(mx_bin/2)
print (ans)
