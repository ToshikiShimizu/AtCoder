#coding:utf-8
X = input()
ans = 0
cnt = 0
for x in X:
    if x=="S":
        cnt+=1
    else:
        if (cnt>0):
            cnt-=1
            ans+=1
print (len(X)-2*ans)