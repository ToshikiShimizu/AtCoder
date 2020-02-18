N = int(input())
R = input()
ans = 0
score = {'A':4, 'B':3, 'C':2, 'D':1, 'F':0}
for r in R:
    ans += score[r]
print (ans/N)