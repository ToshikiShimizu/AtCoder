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

ll d[300][300];

void warshall_floyd(int n) {
  for (int k = 0; k < n; k++){       // 経由する頂点
    for (int i = 0; i < n; i++) {    // 始点
      for (int j = 0; j < n; j++) {  // 終点
        d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
      }
    }
  }
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n,m;
  ll l;
  cin >> n >> m >> l;
  int a,b;
  ll c;
  REP(i,n)REP(j,n){
    if(i==j)d[i][j]=0;
    else d[i][j] = LLINF;
  }
  REP(i,m){
    cin >> a >> b >> c;
    d[a-1][b-1] = c;
    d[b-1][a-1] = c;
  }

  warshall_floyd(n);

  int q;
  cin >> q;
  REP(i,n)REP(j,n){
    if (i==j)continue;
    if (d[i][j] <= l)d[i][j] = 1;
  }
  warshall_floyd(n);
  int s,t;
  REP(i,q){
    cin >> s >> t;
    if (d[s-1][t-1]==LLINF)cout <<-1<<endl;
    else cout << d[s-1][t-1]-1 << endl;
  }
}
