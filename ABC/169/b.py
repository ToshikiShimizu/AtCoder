N = int(input())
A = list(map(int, input().split()))

INF = 10**18

ans = 1

if 0 in A:
    print(0)
    exit()

for a in A:
    ans*=a
    if ans > INF:
        print(-1)
        exit()
print (ans) 