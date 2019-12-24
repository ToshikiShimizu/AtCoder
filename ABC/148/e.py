#coding:utf-8
n = int(input())
if (n%2==1):
    print (0)
    exit()
n//=2
ls_p = []
p = 5
while(p<10e+18):
    ls_p.append(p)
    p*=5
#print (ls_p)
print (sum([n//p for p in ls_p]))