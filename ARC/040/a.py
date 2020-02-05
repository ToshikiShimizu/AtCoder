#coding:utf-8
r = 0
b = 0
N = int(input())
for n in range(N):
    S = input()
    for s in S:
        if s == 'R':
            r+=1
        elif s == 'B':
            b+=1
if (r>b):
    print ("TAKAHASHI")
elif (r<b):
    print ("AOKI")
else:
    print ("DRAW")
