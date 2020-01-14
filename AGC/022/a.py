
#coding:utf-8
S = input()
if len(S)<26:
    for i in [chr(i) for i in range(97, 97+26)]:
        if not i in S:
            print (S+i)
            exit()
else:
    
    for i in range(len(S)-1):


        if (S[-i-1] > S[-i-2]):
            for j in S[-i-1:][::-1]:
                #print (j)
                if (S[-i-2]<j):
                    print (S[:-i-2]+j)
                    exit()
        else:
            pass
print (-1)
            