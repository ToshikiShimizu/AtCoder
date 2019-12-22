#coding:utf-8
n = int(input())
set_ng = set()
for i in range(3):
    set_ng.add(int(input()))

if (n in set_ng):
    print ("NO")
    exit()    
count = 100
while(n>0):
    if (count==0):
        print ("NO")
        exit()        
    if (not n-3 in set_ng):
        n-=3
    elif (not n-2 in set_ng):
        n-=2
    elif (not n-1 in set_ng):
        n-=1
    else:
        print ("NO")
        exit()
    count -= 1
print ("YES")