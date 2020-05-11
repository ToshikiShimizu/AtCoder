A,B,C,K = map(int,input().split())

ans = 0
mn =  min(A,K)
K -= mn
ans += mn

mn =  min(B,K)
K -= mn

mn =  min(C,K)
K -= mn
ans -= mn
print(ans)