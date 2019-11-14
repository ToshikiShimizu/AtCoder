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
  int m;
  cin >> m;
  if (m<100){
    cout << "00" << endl;;
  }else if(m<=5000){
    cout << setfill('0') << right << setw(2) << m/100 << endl;
  }else if(m<=30000){
    cout << m/1000 + 50 << endl;;
  }else if(m<=70000){
    cout << (m/1000 - 30)/5 + 80 << endl;
  }else{
    cout << 89 << endl;;
  }
}
