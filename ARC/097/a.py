#coding:utf-8
s = input()
K = int(input())
st = set()
for i in range(5):
    for j in range(len(s)-i):
        st.add(s[j:j+i+1])
ls = list(st)
print (sorted(ls)[K-1])