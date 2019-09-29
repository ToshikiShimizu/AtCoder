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

vector<vector<int> > v;
int n;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
    
  cin >> n;
  int w, h;
  REP(i,n){
    cin >> w >> h;
    vector<int> temp = {w,-h};
    v.push_back(temp);
  }
  SORT(v);

  int dp[n+2];
  REP(i,n+2)dp[i]=INTINF;
  dp[0] = 0;
  REP(i,n){
    v[i][1] *= -1;
    *lower_bound(dp,dp+n+1,v[i][1]) = v[i][1];
  }

  REP(i,n+2)if(dp[i]==INTINF){
    cout << i-1 << endl;
    return 0;
  }
}
