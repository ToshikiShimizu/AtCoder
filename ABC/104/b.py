#coding:utf-8
s = input()

if s[0]!='A':
    print ('WA')
    exit()

cnt = 0
for char in s[2:-1]:
    if char=='C':
        cnt += 1
if cnt!=1:
    print ('WA')
    exit()

cnt_upper = 0
for char in s:
    cnt_upper += char.isupper()
if cnt_upper != 2:
    print ('WA')
    exit()

print ('AC')
