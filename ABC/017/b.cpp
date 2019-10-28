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
  string s;
  cin >> s;

  bool ok = true;
  REP(i,s.size()){
    if(s[i]=='o'|s[i]=='k'|s[i]=='u'){
      ;
    }
    else if(s[i]=='c'){
      if (i < s.size()-1 & s[i+1]=='h'){
        ;
      }else{
        ok = false;
      }
    }else if(s[i]=='h'){
      if (i > 0 & s[i-1]=='c'){
        ;
      }else{
        ok = false;
      }
      }else{
      ok = false;
    }
  }
  if (ok)cout << "YES" << endl;
  else cout << "NO" << endl;
}
