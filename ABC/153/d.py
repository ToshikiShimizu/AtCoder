#coding:utf-8
H = int(input())
for i in range(41):
    if (2**i-1 >= H):
        print (2**i-1)
        break