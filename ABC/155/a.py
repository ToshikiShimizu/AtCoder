a,b,c = map(int,input().split())
s = set((a,b,c))
if len(s)==2:
    print('Yes')
else:
    print('No')
