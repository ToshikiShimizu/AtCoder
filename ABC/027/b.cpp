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
  int n;
  cin >> n;
  vector<int> v;
  int a;
  int sm = 0;
  REP(i, n){
      cin >> a;
      v.push_back(a);
      sm += a;
  }
  if(sm%n != 0){
      cout << -1 << endl;
      return 0;
  }
  int size = sm/n;
  int ac = 0;
  int ans = n;
  int cnt = 0;
  REP(i,n){
      cnt++;
      ac += v[i];
      if (ac==cnt*size){
          ans--;
          cnt = 0;
          ac = 0;
      }
  }
  cout << ans << endl;

}