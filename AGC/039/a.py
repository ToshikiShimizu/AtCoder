#coding: utf-8
s = input()
k = int(input())

if len(set(s))==1:
  print((len(s)*k)//2)
  exit()

dup = [1]
for i in range(1,len(s)):
  if s[i-1]==s[i]:
    dup[-1]+=1
  else:
    dup.append(1)
    
ans = 0
for i in dup:
  ans += (i//2)*k

if s[0]==s[-1]:
  ans += ((dup[0]+dup[-1])//2 - (dup[0]//2+dup[-1]//2))*(k-1)

print(ans)
