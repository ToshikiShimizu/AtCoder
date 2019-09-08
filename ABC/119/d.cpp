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
const int INTINF = 1<<29;
const ll LLINF = 1LL<<61;
const int MOD = (int)1e9 + 7;
const double EPS = 1e-9;
const int DX[8]={ 0, 1, 0,-1, 1, 1,-1,-1};
const int DY[8]={ 1, 0,-1, 0, 1,-1, 1,-1};


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int a,b;
  ll q;
  cin >> a >> b >> q;
  ll tmp;
  vector<ll> A,B,Q;
  REP(i,a){
      cin >> tmp;
      A.push_back(tmp);
  }
  A.push_back(-LLINF);A.push_back(LLINF);
  REP(i,b){
      cin >> tmp;
      B.push_back(tmp);
  }
  B.push_back(-LLINF);B.push_back(LLINF);
  REP(i,q){
      cin >> tmp;
      Q.push_back(tmp);
  }
  SORT(A);SORT(B);
  
  for(auto x: Q){
      ll ans = LLINF;
      auto it_s1 = lower_bound(ALL(A),x)-1;
      auto it_s2 = upper_bound(ALL(A),x);
      auto it_t1 = lower_bound(ALL(B),x)-1;
      auto it_t2 = upper_bound(ALL(B),x);
      //cout << *it_s1 << " " <<  *it_s2 << " " <<  *it_t1 << " " <<  *it_t2 << " " << endl;

      ans = min( ans, abs(x - *it_s1) + abs(*it_s1 - *it_t1));
      ans = min( ans, abs(x - *it_s1) + abs(*it_s1 - *it_t2));
      ans = min( ans, abs(x - *it_s2) + abs(*it_s2 - *it_t1));
      ans = min( ans, abs(x - *it_s2) + abs(*it_s2 - *it_t2));
      ans = min( ans, abs(x - *it_t1) + abs(*it_t1 - *it_s1));
      ans = min( ans, abs(x - *it_t1) + abs(*it_t1 - *it_s2));
      ans = min( ans, abs(x - *it_t2) + abs(*it_t2 - *it_s1));
      ans = min( ans, abs(x - *it_t2) + abs(*it_t2 - *it_s2));
      cout << ans << endl;
  }
}
