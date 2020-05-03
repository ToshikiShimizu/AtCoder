N, M = map(int, input().split())

for i in range(M//2):
    print(i+1, M-i)

for i in range((M+1)//2):
    print (M+1+i,2*M+1-i)