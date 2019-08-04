#coding:utf-8
N = int(input())
H = list(map(int,input().split()))
flag = False
for i in range(len(H)-1):
    if (H[i] - 1) > H[i+1]:
        print ("No")
        exit()
    elif (H[i] - 1 )== H[i+1]:
        if flag:
            print ("No")
            exit()
        else:
            flag = True
    elif H[i] == H[i+1]:
        pass
    else:
        flag = False
    #print (flag)
print ("Yes")