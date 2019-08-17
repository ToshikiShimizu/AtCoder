S = input()
old = ""
history = []
for s in S:
    cur = old + s
    old = ""
    if len(history) > 0 and history[-1]==cur:
        old = cur
    else:
        history.append(cur)
print (len(history))