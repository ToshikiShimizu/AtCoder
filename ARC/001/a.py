#coding:utf-8
from collections import Counter
n = int(input())
c = list(str(input()))
if (Counter(c).most_common()[0][1]==n):
    least = str(0)
else:
    least = str(Counter(c).most_common()[-1][1])
print (str(Counter(c).most_common()[0][1]) + " " + least)