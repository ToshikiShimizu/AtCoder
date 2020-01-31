#coding:utf-8
ls = [int(input())]
while(ls):
    print (ls)
    new = []
    for e in ls:
        if e>1:
            new.extend([e//2, e//2])
    ls = new