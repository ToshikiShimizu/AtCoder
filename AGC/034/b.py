#coding:utf-8
s = input()
ls_s = []
Skip = 0
s2 = ""
for i in range(len(s)-1):
    if Skip:
        Skip = 0
    elif s[i:i+2] == "BC":
        s2 += 'W'
        Skip = 11
    elif s[i] == "A":
        s2 += 'B'
    else:
        ls_s.append(s2)
        s2 = ""
ls_s.append(s2)
#print (ls_s)
        
def bw(s):
    ls = []
    cnt_b =0
    for i in range(len(s)):
        if s[i] == "W":
            ls.append(cnt_b)
        else:
            cnt_b+=1
    return sum(ls)
sm = 0
for s2 in ls_s:
    sm += bw(s2)
print (sm)
