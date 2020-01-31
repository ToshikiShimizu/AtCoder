#coding:utf-8
S = input().split()
d = {"Left":"<", "Right":">", "AtCoder":"A"}
S = [d[s] for s in S]
print (" ".join(S))