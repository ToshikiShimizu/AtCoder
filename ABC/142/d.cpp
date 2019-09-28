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



map<long long, int> PrimeFactor(ll n){
  map<long long, int> ret;
  for (ll i=2;i*i<=n;i++){
    while(n%i==0){
      ret[i]++;
      n/=i;
    }
  }
  if (n!=1){
    ret[n] = 1;
  }
  return ret;
}
int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  ll a,b;
  cin >> a >> b;
  ll ans = 1;
  for(auto p : PrimeFactor(a)) {
  if (b % p.first == 0)ans++;
  }
  cout << ans << endl;
}