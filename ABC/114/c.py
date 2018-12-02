#coding:utf-8
import itertools
n = int(input())
ls_all = []
A = ['3','5','7']
for j in range(3,10):
    ls = list(itertools.product(A, repeat=j))
    ls = [int(''.join(i)) for i in ls if ('3' in i and '5' in i and '7' in i)]
    ls_all.extend(ls)
ans = [n >= i for i in ls_all]
print (sum(ans))
