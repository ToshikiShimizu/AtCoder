#coding:utf-8
a,b,c,d = map(int,input().split())
def gcd(a, b):
    while b:
        a, b = b, a % b
    return a
def lcm(a, b):
    return a * b // gcd (a, b)
def func(start,end,n):
    ans = (end-start+1)//n
    bonus = (end-start+1)%n    
    if ((start // n + 1) * n)  <= (start + bonus - 1):
        ans += 1
    return ans
cnt_c = func(a,b,c)
cnt_d = func(a,b,d)
cnt_cd = func(a,b,lcm(c,d))
print (b-a-(cnt_c + cnt_d - cnt_cd)+1)

