#coding:utf-8
n = int(input())

if n==0:
    print ('0')
    exit()

i=0
s=''
while(n!=0):
    if n%(2**(i+1))!=0:
        s+='1'
        n-=(-2)**i
    else:
        s+='0'
    i+=1
print (s[::-1])
