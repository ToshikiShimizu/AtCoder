#coding:utf-8
S = input()
st = set(S)
ans = 1e+9
for s in st:
  ls_strg = list(S.split(s))
  mx = 0
  for strg in ls_strg:
    mx = max(mx,len(strg))
  ans = min(mx, ans)
print (ans)
