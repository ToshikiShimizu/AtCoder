def main():
    N = int(input())
    ans = 0
    for i in range(1, N+1):
        ans += sum(j for j in range(i, N+1, i))
    print(ans)
main()