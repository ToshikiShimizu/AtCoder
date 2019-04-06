#coding:utf-8
A = [0] * 6
for i in range(len(A)):
    A[i] = int(input())
if A[4]-A[0]<=A[5]:
    print ("Yay!")
else:
    print (":(")
