#coding:utf-8
s = input()
k = int(input())
idx = 1e+19
for i,char in enumerate(s):
    if int(char)>1:
        x = char
        idx = i
        break
#print (x,idx)
if k>idx:
    print (x)
else:
    print (1)
