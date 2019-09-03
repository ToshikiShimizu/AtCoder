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
  int lx = 0, ly = 0, ux, uy;
  int n;
  int x, a, y;
  cin >> ux >> uy >> n;

  REP(i,n){
      cin >> x >> y >> a;
      if(a==1){
          lx = max(lx, x);
      }else if(a==2){
          ux = min(ux, x);
      }else if(a==3){
          ly = max(ly,y );
      }else{
          uy = min(uy, y);
      }
  }
  cout << max(0,(ux-lx))*max(0,(uy-ly)) << endl;
}




