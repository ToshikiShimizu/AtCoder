#coding:utf-8
n = int(input())
ls = []
isLegal = True
for i in range(n):
    word = input()
    ls.append(word)
    if i > 0:
        isLegal *= ls[i-1][-1]==word[0]
flag = True
if (len(set(ls))==n) & isLegal:
    print ("Yes")
else:
    print ("No")
