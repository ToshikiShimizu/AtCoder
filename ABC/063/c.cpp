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
  int n, s;
  cin >> n;
  vector<int> v;
  v.push_back(0);
  int sm = 0;
  REP(i,n){
    cin >> s;
    v.push_back(s);
    sm += s;
  }
  SORT(v);
  REP(i,n+1){
    if ((sm-v[i])%10!=0){
      cout << sm - v[i] << endl;
      return 0;
    }
  }
  cout << 0 << endl;

}
