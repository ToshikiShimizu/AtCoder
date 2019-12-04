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
  vector<int> A;
  int n;
  int a;
  cin >> n;
  REP(i,n){
      cin >> a;
      A.push_back(a);
  }
  SORT(A);
  REV(A);
  int ans = 1;
  int cnt = 0;
  REP(i,n-1){
      if (A[i]==A[i+1]){
          cnt++;
          ans*=A[i];
          i++;
          if (cnt==2){
              cout << ans << endl;
              return 0;
          }
      }
  }
  cout << 0 << endl;
}
