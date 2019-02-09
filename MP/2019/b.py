#coding:utf-8
s = set(map(int,input().split()))
for i in range(2):
    s = s & set(map(int,input().split())) 
if (len(s)):
    print ("NO")
else:
    print ("YES")
    
