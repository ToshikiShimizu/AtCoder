#coding:utf-8
H,W = map(int,input().split())
mat = []
for h in range(H):
    mat.append(list(input()))
#print (mat)
ls_set = []
for h in range(H):
    for w in range(W):
        #print (h,w)
        if w + 1 < W:
            if mat[h][w] != mat[h][w+1]:
                ls_set.append({h*W+w,h*W+w+1})
        if h + 1 < H:        
            if mat[h][w] != mat[h+1][w]:
                ls_set.append({h*W+w,(h+1)*W+w})
#print (ls_set)

change = 1
while(change):
    change = 0
    for j in range(len(ls_set)-1):
        ls =  list(range(j+1,len(ls_set)))[::-1]
        for i in ls:
            #print (i) 
            if not ls_set[j].isdisjoint(ls_set[i]):
                ls_set[j] = ls_set[j] | ls_set[i]
                ls_set.pop(i)
                change = 1
        #print (ls_set)
ans = 0
for s in ls_set:
    odd = 0
    even = 0
    for i in s:
        if i % 2 == 0:
            even+=1
        else:
            odd+=1
    temp = even*odd
    #print (temp)
    ans += temp    
print (ans) 
