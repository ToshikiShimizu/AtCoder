#coding:utf-8
def check(n):
    for i in range(30):
        j = 2**i
        if n < j:
            break
    return j-n




N = int(input())
A = list(map(int,input().split()))
A = sorted(A) 
invA = [check(i) for i in A]
#print (A)
#print (invA)
cnt = 0
idx = -1
while(idx - cnt + N > -1):
    #print(invA[idx],A[:idx])
    if not invA[idx] in A[:idx]:
        pass
    else:
        for i,a in enumerate(A[:idx]):
            if a == invA[idx]:
                cnt += 1
                del A[i]
                del invA[i]
    idx -= 1
    #print (idx - cnt + N)
print (cnt)
