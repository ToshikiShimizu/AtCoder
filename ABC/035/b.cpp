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
  int t;
  cin >> s;
  cin >> t;
  int x = 0;
  int y = 0;
  int wild = 0;
  REP(i,s.size()){
      if (s[i]=='U'){y++;}
      else if(s[i]=='D'){y--;}
      else if(s[i]=='R'){x++;}
      else if(s[i]=='L'){x--;}
      else{wild++;}
  }
  int ans = abs(x) + abs(y);
  if (t==1){
      cout << ans + wild << endl;
  }else{
      int l = s.size();
      if (l%2==0){
        cout << max(0, ans - wild) << endl;
      }else{
        cout << max(1, ans - wild) << endl;
      }
  }
}
