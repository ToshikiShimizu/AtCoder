#coding:utf-8
n,k = map(int,input().split())
A = list(map(int,input().split()))
sm = 0
S = []
for a in A:
  sm += a
  S.append(sm)
ans = 0
x = 0
j = 0
ptr = 0
while(1):
    
    #print (ptr,j)
    if S[ptr]-x >= k:
      #print ("s",S[ptr]-x)
      ans += (n-ptr)
      x = S[j]
      j += 1
      if j==n:
        break
    else:
      ptr += 1
      if ptr == n:
        break
      
print (ans)

