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
  int n;
  cin >> n;
  int a;
  int L[100], R[100], A[100], B[100];
  REP(i,n){
      cin >> a;
      A[i] = a;
  }
  REP(i,n){
      cin >> a;
      B[i] = a;
  }
  int sml = 0;
  int smr = 0;
  REP(i,n){
      sml += A[i];
      L[i] = sml;
      smr += B[n-i-1];
      R[n-i-1] = smr ;
  } 
  int ans = 0;
  REP(i,n){
      ans = max(ans,L[i]+R[i]);
  }
  cout << ans << endl;
}
