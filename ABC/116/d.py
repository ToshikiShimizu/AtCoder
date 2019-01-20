#coding:utf-8
import copy
N, K = map(int,input().split())
T = []
D = []
ls_td = []
for n in range(N):
    t, d = map(int,input().split())
    ls_td.append([t,d])
ls_td = sorted(ls_td, key=lambda x: x[1])[::-1]
head = ls_td[:K]
tail = ls_td[K:]
def get_set(mat):
    st = set()
    for t,d in mat:
        st.add(t)
    return st
def score(mat):
    r = 0
    ls_t = set()
    for t,d in mat:
        ls_t.add(t)
        r += d
    r += len(ls_t)**2
    return r

def search_del(mat):
    idx = -1
    st = set()
    for i,(t,d) in enumerate(mat):
        if t in st:
            idx = i
        st.add(t)
    return idx
st = get_set(head)
current_score = score(head)
idx = search_del(head)
for t,d in tail:
    if idx == -1:
        break

    if t in st:
        pass
    else:
        new = copy.deepcopy(head)
        new[idx] = t,d
        candidate_score = score(new)
        if current_score < candidate_score:
            head = new
            st.add(t)
            current_score = candidate_score
            idx = search_del(head)
print (current_score) 
        
