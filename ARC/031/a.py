#coding:utf-8
N = input()
for i in range(len(N)//2):
    if (N[i]!=N[-i-1]):
        print ("NO")
        exit()
print ("YES")
