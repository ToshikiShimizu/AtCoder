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
  int a,b,c;
  int a_,b_,c_;
  int ans = 0;
  cin >> a >> b >> c;
  if (a==b&&b==c&c%2==0){
    cout << -1 << endl;
  }else{
    while(a%2==0 && b%2==0 && c%2==0){
      ans++;
      a_ = (b+c)/2;
      b_ = (c+a)/2;
      c_ = (a+b)/2;
      a = a_;
      b = b_;
      c = c;
      

    }
    cout << ans << endl;
  }
  

}
