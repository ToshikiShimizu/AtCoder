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
const int INTINF = 1<<30;
const ll LLINF = 1LL<<62;
const int MOD = (int)1e9 + 7;
const double EPS = 1e-9;


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int a, n;
  cin >> n;
  int cnt[100001];
  REP(i,100002)cnt[i]=0;
  REP(i,n){
      cin >> a;
      cnt[a]++;
      cnt[a+1]++;
      cnt[a+2]++;
  }
  int mx = 0;
  FOR(i,0,100002){
      mx = max(mx,cnt[i]);
  }
  cout << mx << endl;

}
