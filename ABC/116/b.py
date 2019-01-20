#coding:utf-8
s = int(input())
ls = [s]
while(1):
    n = ls[-1]
    if  n % 2 == 0:
        new = n / 2
    else:
        new = 3*n + 1  
    if new in ls:
        print (len(ls)+1)
        break
    else: 
        ls.append(new)
       
