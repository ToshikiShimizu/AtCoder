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
const int INF = 999999999;
const int MOD = (int)1e9 + 7;
const int EPS = 1e-9;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n;
  cin >> n;
  int m;
  vector<int> vec;
  REP(i,3*n){
      cin >> m;
      vec.push_back(m);
  }
  SORT(vec);
  REV(vec);
  ll ans = 0;
  REP(i,3*n){
      if (i%2==1)ans+=vec[i];
      if (i==(2*n-1))break;
  }
  cout << ans << endl;
}