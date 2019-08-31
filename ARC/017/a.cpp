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
  int dp[1000001];
  int n = 1000000;
  int m;
  cin >> m;
  REP(i,n)dp[i]=0;
  dp[0] = 1;dp[1] = 1;  
  FOR(i,2,n+1){
      if (dp[i]==0){
          for(int j=2;j*i<n+1;j++)dp[i*j]=1;
      }
      
  }
  if (dp[m]==0){
      cout << "YES" << endl;
  }else{
      cout << "NO" << endl;
  }
}