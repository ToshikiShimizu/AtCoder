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
const int DX[8]={ 0, 1, 0,-1, 1, 1,-1,-1};
const int DY[8]={ 1, 0,-1, 0, 1,-1, 1,-1};


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  string S;
  cin >> S;
  int ticket[4];
  REP(i,4){
      ticket[i] = S[i]-'0';
  }
  int sign[2] = {1,-1};
  string op = "+-";
  REP(i,2)REP(j,2)REP(k,2){
      if (ticket[0] + sign[i]*ticket[1] + sign[j]*ticket[2] + sign[k]*ticket[3] == 7){
          cout << ticket[0] << op[i] << ticket[1] << op[j] << ticket[2] << op[k] << ticket[3]<< "=7" << endl;
          return 0;
      }
  }
}
