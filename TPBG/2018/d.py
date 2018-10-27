#coding:utf-8
import numpy as np
n = int(input())


a = np.ones((2,1)).astype(np.int)
a[-1][-1]+len(a)
i = 1
while(1):
    if len(a)>=500:
        break
    if n==a[-1][-1]:
        print ("Yes")
        print (len(a))
        for line in a:
            print (i," ".join(line.astype(np.str).tolist()))
        exit()
    i+=1
    temp = int((1/2)*i*(i+1))
    add = np.array((list(range(temp-i+1,temp+1))))

    a = np.c_[a,add]
    a = np.r_[a,add.reshape(1,-1)]
print ("No")
