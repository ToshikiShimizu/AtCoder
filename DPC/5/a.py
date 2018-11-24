#coding:utf-8
N = int(input())
ls_a  = list(map(int,input().split()))
avg = sum(ls_a)/N
min_l = 1e+6
for i,a in enumerate(ls_a):
    if abs(a-avg)<min_l:
        min_l = abs(a-avg)
        min_idx = i
print (min_idx)
