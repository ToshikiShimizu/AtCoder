#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)
#define ALL(a)  (a).begin(),(a).end()
#define SUM(a)  accumulate((a).begin(),(a).end(),0)
#define SORT(a) sort(ALL(a))
#define dump(x)  cerr << #x << " = " << (x) << endl;
typedef long long ll;
const int INF = 999999999;
const int MOD = (int)1e9 + 7;
const int EPS = 1e-9;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n,a,b;
  int ans = 0;
  cin >> n >> a >> b;
  FOR(i,1,n+1){
      int sum = 0;
      FOR(j,0,5){
          sum += (i / (int)pow(10,j))%10;
      }
      //cout << i <<" " << sum << endl; 
      if (a<=sum && sum <=b){
          ans+=i;
      }
  }
  cout << ans << endl;
}