import numpy as np
import math
S = input()
ans = np.zeros(len(S))
len_r = 0
len_l = 0
for i in range(len(S)):
  if S[i] == "R":
    if S[(i+1)%len(S)] == "L":
      r_idx = i
      l_idx = i+1
    len_r += 1
  else:
    len_l += 1
    if S[(i+1)%len(S)] == "R":
      ans[r_idx] = math.ceil(len_r/2)+math.ceil((len_l-1)/2)
      ans[l_idx] = math.ceil(len_l/2)+math.ceil((len_r-1)/2)
      #print (len_r,len_l)
      len_r = 0
      len_l = 0
print (" ".join(ans.astype(np.int).astype(np.str)))
