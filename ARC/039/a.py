#coding:utf-8
A, B = map(int,input().split())
for scale in [100, 10, 1]:
    if scale == 100:
        mx = max(9-(A//scale)%10,(B//scale)%10-1)
    else:
        mx = max(9-(A//scale)%10,(B//scale)%10)
    if mx != 0:
        print (A-B+scale*mx)
        break
else:
    print (A-B+scale*mx)