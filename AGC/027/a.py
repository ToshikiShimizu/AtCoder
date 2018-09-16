#coding:utf-8
n,x = map(int,input().split())
ls_candy = list(map(int,input().split()))
ls_candy.sort()
sum = 0
answer = 0
just = 0
for i,candy in enumerate(ls_candy):
    sum += candy
    if x > sum:
        answer = i
    elif x < sum:
        answer = i
        break
    else:
        answer = i+1
        break
print (answer)
