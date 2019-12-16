#coding:utf-8
s = input()[:12]
base = "WBWBWWBWBWBW"
d = {"Do":0,"Re":2,"Mi":4,"Fa":5,"So":7,"La":9,"Si":11}

for k,v in d.items():
    #print (k,v,base[v:]+base[:v],s)

    if (s==(base[v:]+base[:v])):
        print (k)