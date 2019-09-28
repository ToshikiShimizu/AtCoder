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
  int n,m;
  int a,b;
  int c;
  cin >> n >> m;
  int N = pow(2,n);
  int dp[N];
  REP(i,N){
    dp[i] = INTINF;
  }
  dp[0] = 0;
  REP(i,m){
    cin >> a >> b;
    int key = 0;
    REP(j,b){
      cin >> c;
      key += pow(2,c-1);
    }
    REP(j,N){
      dp[j] =  min(dp[j&~key]+a,dp[j]);
    }
    //cout << key << endl;
  }
  if (dp[N-1]==INTINF)dp[N-1] = -1;
  cout << dp[N-1] << endl;
}
