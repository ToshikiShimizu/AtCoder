N = int(input())
S = input()

st = [set() for _ in range(3)]

for s in S:
    for pre in st[1]:
        st[2].add(pre+s)
    for pre in st[0]:
        st[1].add(pre+s)
    st[0].add(s)
        
print (len(st[2]))



