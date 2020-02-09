#coding:utf-8
S, T = input().split()
A, B = map(int, input().split())
U = input()
cnt = {}
cnt[S] = A
cnt[T] = B
cnt[U] -= 1
print (cnt[S], cnt[T])