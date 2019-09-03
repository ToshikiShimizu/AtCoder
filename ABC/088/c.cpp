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
  int GRID = 3;
  int CMAX = 100;
  int C[GRID][GRID];
  int c;
  int sub[GRID];
  REP(i,GRID)REP(j,GRID){
      cin >> c;
      C[i][j] = c;
  }
  REP(a0,CMAX+1)REP(a1,CMAX+1)REP(a2,CMAX+1){
      bool flag = true;
      REP(j,3){
        sub[j] = C[0][j] - a0;
        if(sub[j] + a1 != C[1][j])flag = false;
        if(sub[j] + a2 != C[2][j])flag = false;
      }
      if (flag){
          cout << "Yes" << endl;
          return 0;
      }

  }
  cout << "No" << endl;
}