N = int(input())
C = []
for n in range(N):
    c = int(input())
    C.append(c)

stack = []
old = None
for n in range(N):
    c = C[n]
    if (n%2==1):
        if old != c:
            stack.pop()
            if len(stack)==0:
                stack.append(0)
    else:
        if old != c:
            stack.append(n)
    old = c

#print (stack)
if old == 0:
    stack.append(n+1)
#print (stack)
if len(stack)%2 == 1:
    stack.insert(0,0)
print (sum(stack[1::2]) - sum(stack[::2]))