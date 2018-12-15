#coding:utf-8
N = int(input())
A = list(map(int,input().split()))
A = sorted(A) 
#print (N,A)
i = 0
cnt = 0
while (i < len(A)-1):
    length = len(A)
    for j in range(length-1-i):
        temp = len(A)-1-j
        s = A[i]+A[temp]
        if ( 0 == s&(s-1)):
            A.pop(temp)
            cnt += 1
            break
        #print (A)
    i+=1
print (cnt)
