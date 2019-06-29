#coding:utf-8
from collections import Counter

S = input()
cnt = Counter(list(S))
ls = list(cnt.values())
if (ls[0]==2 and ls[1]==2):
    print ("Yes")
else:
    print ("No")

