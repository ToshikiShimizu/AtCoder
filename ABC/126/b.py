#coding:utf-8
S = input()
def checkMonth(s):
    num = int(s[0]) * 10 + int(s[1])
    if num >= 1 and num <= 12:
        return True
    else:
        return False
early = S[:2]
late = S[2:]
#print (early,late)
earlyIsMonth = checkMonth(early)
lateIsMonth = checkMonth(late)
if earlyIsMonth and lateIsMonth:
    print ("AMBIGUOUS")
elif earlyIsMonth and not lateIsMonth:
    print ("MMYY")
elif not earlyIsMonth and lateIsMonth:
    print ("YYMM")
else:
    print ("NA")

