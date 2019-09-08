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
  int n;
  cin >> n;
  set<int> st;

  int old = -100;
  int a;
  REP(i,n){
      cin >> a;
      if (old+1==a){
          st.insert(old-1);
      }
      old = a;
  }
  int ans = 0;
  REP(i,n){
      cin >> a;
      ans+=a;
  }
  REP(i,n-1){
      cin >> a;
      if (st.count(i)==1)ans+=a;
  }
  cout << ans << endl;
}
