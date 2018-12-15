#coding:utf-8
s = input()
ls = []
cnt_b =0 
for i in range(len(s)):
    if s[i] == "W":
        ls.append(cnt_b)
    else:
        cnt_b+=1
print (sum(ls))
