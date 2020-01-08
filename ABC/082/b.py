#coding:utf-8
S = str(input())
T = str(input())
S = "".join(sorted(S))
T = "".join(sorted(T))
T = T[::-1]
ST = sorted([S,T])
#print (ST)
if (ST[0]==S and S!=T):
    print ("Yes")
else:
    print ("No")