x, y = map(int,input().split())

for a in range(x+1):
    b = x-a
    #print(a,b)
    if 2*a+4*b==y:
        print ('Yes')
        exit()

print ('No')