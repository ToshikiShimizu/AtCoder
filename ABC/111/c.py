#coding:utf-8
import numpy as np
import collections
N = 1000000
_ = int(input())
ls = list(map(int,input().split()))
ls.append(N)
ls.append(N)
array = np.array(ls).reshape(-1,2).T
c_even = collections.Counter(array[0])
c_odd = collections.Counter(array[1])
if len(set(ls))==2:
    print (int((len(ls)-2)/2))
elif c_even.most_common()[0][0] != c_odd.most_common()[0][0]:
    print (len(ls)-c_even.most_common()[0][1]-c_odd.most_common()[0][1]-2)
else:
    print (min(len(ls)-c_even.most_common()[0][1]-c_odd.most_common()[1][1]-2,len(ls)-c_even.most_common()[1][1]-c_odd.most_common()[0][1]-2))
