#coding:utf-8
A, K = map(int, input().split())
if K==0:
    print (int(2e+12)-A)
else:
    for i in range(42):
        if(2e+12 <= A):
            print (i)
            break
        print(A)
        A += 1 + K * A