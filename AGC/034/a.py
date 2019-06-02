#coding:utf-8
N,A,B,C,D = map(int,input().split())
S = input()
def isContinuous(S):
    for i in range(len(S)-1):
        if S[i:i+2] == "##":
            return True
    return False
def paint(S):
    P = [0] * len(S)
    for i in range(len(S)):
        if S[i] == "#":
            P[i] = 1
            if i != 0:
                P[i-1] = 1
            if i != (len(S)-1):
                P[i+1] = 1
    return P
if C < D:
    if (not isContinuous(S[A:C])) and (not isContinuous(S[B:D])):
        print ("Yes")
    else:
        print ("No")
else:
    P = paint(S)
    #print (P)
    #print (P[B-1:D])
    for i in P[B-1:D]:
        if i == 0:
            print ("Yes")
            exit()
    print ("No")
