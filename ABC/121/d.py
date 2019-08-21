A, B = map(int,input().split())
def f(x):
   if x%4==3:
       return 0
   elif x%4==2:
       return 1^x
   elif x%4==1:
       return 1
   else:
       return x
print (f(A-1)^f(B))