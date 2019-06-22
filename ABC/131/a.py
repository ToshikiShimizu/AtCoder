#coding:utf-8
S = input()
old = ""
for s in S:
  if old == s:
    print ("Bad")
    exit()
  old = s
print ("Good")