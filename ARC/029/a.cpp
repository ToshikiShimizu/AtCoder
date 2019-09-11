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
  int size = 201;
  int dp[size];
  REP(i,size){
      dp[i]=0;
  }
  dp[0] = 1;
  int t;
  cin >> n;
  int sm = 0;
  REP(i,n){
      cin >> t;
      sm+=t;
      for(int j=size-1;j>=0;j--){
          if (dp[j] == 1)dp[j+t]=1;
      }
  }
  for(int j=size-1;j>=0;j--){
      if (dp[j]==1 && (sm/2)>=j)
      {
        cout << sm-j << endl;
        return 0;
      }
  }
}

