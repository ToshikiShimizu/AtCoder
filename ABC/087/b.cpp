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
  int a,b,c,x;
  cin >> a >> b >> c >> x;
  int ans = 0;
  FOR(i,0,a+1)FOR(j,0,b+1)FOR(k,0,c+1){
      if ((500*i+100*j+50*k)==x){
          ans++;
      }
  }
  cout << ans << endl;
}