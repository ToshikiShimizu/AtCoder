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
  int n, c, k;
  int t;
  cin >> n >> c >>k;
  vector<int> vec;
  REP(i,n){
      cin >> t;
      vec.push_back(t);
  }
  SORT(vec);
  int cnt = 0;
  int start = -INF;
  int ans = 0;
  for (auto v:vec){
          if (cnt<c && (v-start)<=k){
              cnt++;
          }else{
              cnt = 1;
              start = v;
              ans++;
          }
  }
  cout << ans << endl;
}