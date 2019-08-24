MOD = 1000000007
N,K = map(int,input().split())
A = list(map(int,input().split()))
def bubble_sort(A):
    cnt = 0
    for i in range(len(A)):
        for j in range(len(A)-1, i, -1):
            if A[j] < A[j-1]:
                A[j], A[j-1] = A[j-1], A[j]
                cnt += 1
    return cnt
def sigma(k):
    return k*(k+1)//2
C = []
for k in range(2):
    C.extend(A)
cnt = bubble_sort(A)
diff = bubble_sort(C) - 2 * cnt
a = (K*cnt)
b = (diff*sigma(K-1))
print ((a+b)%MOD)
