#coding:utf-8
from collections import defaultdict
S = input()
dd = defaultdict(int)
for s in S:
    dd[s]+=1
if ((dd['S']>0)^(dd['N']>0)):
    print ("No")
elif((dd['E']>0)^(dd['W']>0)):
    print ("No")
else:
    print ("Yes")
