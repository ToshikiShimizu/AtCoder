#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)
#define ALL(a)  (a).begin(),(a).end()
#define SUM(a)  accumulate((a).begin(),(a).end(),0)
#define SORT(a) sort(ALL(a))
#define REV(a) reverse(ALL(a))
#define dump(x)  cerr << #x << " = " << (x) << endl;
typedef long long ll;
const int INTINF = 1<<30;
const ll LLINF = 1LL<<62;
const int MOD = (int)1e9 + 7;
const double EPS = 1e-9;
const int DX[8]={ 0, 1, 0,-1, 1, 1,-1,-1};
const int DY[8]={ 1, 0,-1, 0, 1,-1, 1,-1};


int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int S[1<<18];
    int n;
    int s;
    cin >> n;
    REP(i,1<<n){
        cin >> s;
        S[i] = s;
    }
    multiset<int> st;
    REP(i,1<<n)st.insert(-S[i]);
    vector<int> cur, nxt;
    cur.push_back(*st.begin());
    st.erase(st.begin());
    REP(i,n){
        nxt = cur;
        for(int x : cur){
            //cout << x << " ";
            auto it = st.upper_bound(x);
            if(it == st.end()){
                cout << "No" << endl;
                return 0;
            }
            nxt.push_back(*it);
            st.erase(it);
        }
        cur = nxt;
        cout << endl;
    }
    cout << "Yes" << endl;
    }