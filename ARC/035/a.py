#coding:utf-8
S = str(input())

for i in range(len(S)//2):
    l = S[i] 
    r = S[-i-1]
    if not(l==r or l=='*' or r=='*'):
        print ('NO')
        exit()
print ('YES')
