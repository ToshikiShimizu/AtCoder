#coding:utf-8
N, K = map(int,input().split())
A = list(map(int,input().split()))
def make_divisors(n):
    divisors = []
    for i in range(1, int(n**0.5)+1):
        if n % i == 0:
            divisors.append(i)
            if i != n // i:
                divisors.append(n//i)
    return divisors
ls = sorted(make_divisors(sum(A)))[::-1]


def cost(ls,n):
    ls = sorted(ls)
    #print (ls)
    left = 0
    right = len(ls)-1
    sm = 0
    while left < right:
        if (ls[left] + ls[right])<=n:
            op = ls[left]
            ls[left] = 0
            ls[right] += op
            left += 1
        else:
            op = n-ls[right]
            ls[right] = 0
            right -= 1
            ls[left] -= op
            if ls[left] == 0:
                left += 1


        sm += op
        #print (left,right)
        #print (ls)
        #print (sm)
    return sm

    

for n in ls:
    if cost([a%n for a in A],n) <= K:
        print (n)
        exit()
    


    