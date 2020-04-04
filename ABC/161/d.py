code = '9876543210000000000'
def judge(n):
    n = str(n)
    for i in range(len(n)-1):
        ni = int(n[i])
        if abs((ni) - int(n[i+1])) > 1:
            if ni==9:

                return int(n[:i]+code[:len(n)-i])
            else:
                idx = 8 - ni
                return int(n[:i]+code[idx:idx+len(n)-i])
    return -1


i = 1
cnt = 0
k = int(input())
while(1):
    j = judge(i)
    if j==-1:
        cnt += 1

        i+=1
    else:
        i = j
    if cnt == k:
        print(i-1)
        exit()