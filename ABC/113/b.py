#coding:utf-8
n = int(input())
T,A = list(map(int,input().split()))
ls_H = list(map(int,input().split()))
diff_min = 1e+8
for i,H in enumerate(ls_H):
    diff = abs((T - H  * 0.006) - A)
    if diff < diff_min:
        diff_min = diff
        ans = i
print (int(ans+1))
