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
  int n;
  string s;
  string ac = "b";
  cin >> n;
  cin >> s;
  map<string, int> mp;
  REP(i,101){
    mp[ac] = i;
    if(i%3==0){
      ac = "a" + ac + "c";
    }else if(i%3==1){
      ac = "c" + ac + "a";
    }else{
      ac = "b" + ac + "b";
    }
  }
  auto itr = mp.find(s);
  if (itr == mp.end()){
    cout << -1 << endl;
  }else{
    cout << itr->second << endl;
  }

}
