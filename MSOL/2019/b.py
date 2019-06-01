#coding:utf-8
chars = input()
cnt = 0
for char in chars:
    if char == 'o':
        cnt += 1
if (cnt + 15 - len(chars)) >=  8:
    print ("YES")
else:
    print ("NO")

