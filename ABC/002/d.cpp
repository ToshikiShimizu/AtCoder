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
  int n, m;
  int x, y;
  int ans = 0;
  cin >> n >> m;
  int link[12][12];
  REP(i,m){
      cin >> x >> y;
      link[x-1][y-1]=1;
      link[y-1][x-1]=1;
  }
  for (int S=1<<n;S--;){
      bool flag = true;
      int t = bitset<32>(S).count();
      //cout << t << endl;
      if (t<=ans)continue;
      REP(i,n)REP(j,n){
          if (S>>i&S>>j&1 && !link[i][j])flag = false;
      }
      if(flag)ans=t;
  }
  cout << ans << endl;
  
}
