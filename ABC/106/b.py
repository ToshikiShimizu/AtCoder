#coding:utf-8
n = int(input())
ls_odd = [i for i in range(1,n+1,2)]
cnt = 0
for odd in ls_odd:
    ls_div = [odd % (i+1) == 0 for i in range(odd)]
    if sum(ls_div) == 8:
        cnt += 1
print (cnt)
