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

int gcd(int a, int b){
  if (a%b==0) return b;
  else return gcd(b , a%b);
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n, x;
  cin >> n >> x;
  vector<int> v_x;
  v_x.push_back(x);
  REP(i,n){
    cin >> x;
    v_x.push_back(x);
  }
  SORT(v_x);
  int ans;
  int s;
  REP(i,n){
    s = v_x[i+1] - v_x[i];
    if (i==0){
      ans = s;
    }else{
      ans = gcd(s,ans);
    }
  }
  cout << ans << endl;
}
