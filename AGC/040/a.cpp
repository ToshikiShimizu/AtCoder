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

int acc_left[1000000];
int acc_right[1000000];
int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  string s;
  cin >> s;

  int acc = 0;
  REP(i,s.size()){
    if (s[i] == '<'){
      acc++;
    }else{
      acc = 0;
    }
    acc_left[i+1] = acc;
  }
  acc = 0;
  for(int i=s.size()-1;i>=0;i--){
    if (s[i] == '>'){
      acc++;
    }else{
      acc = 0;
    }
    acc_right[i] = acc;
  }
  ll ans = 0;
  REP(i,s.size()+1){
    ans += max(acc_left[i],acc_right[i]);
    //cout << acc_left[i]<<acc_right[i] << endl;
  }
  cout << ans  << endl;
}
