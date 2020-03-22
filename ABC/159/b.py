s = input()
n = len(s)
l = s[:(n-1)//2]
r = s[(n-1)//2+1:]

if (s == s[::-1] and l == l[::-1] and r == r[::-1] ):
    print ('Yes')
else:
    print ('No')