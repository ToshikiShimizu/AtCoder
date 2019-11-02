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
  ll k;
  cin >> n >> k;
  int a,f;
  vector<ll> A,F;
  REP(i,n){
    cin >> a;
    A.push_back(a);
  }
  REP(i,n){
    cin >> f;
    F.push_back(f);
  }
  SORT(A);
  SORT(F);
  REV(F);
  ll left = -1;
  ll right = 1e+18 + 1;
  while (right - left > 1) {
  ll mid = left + (right - left) / 2;
  ll cost = 0;
  REP(i,n){
    cost += max((A[i] * F[i] - mid + (F[i] - 1 )) / F[i],(ll) 0);
    //dump(i);dump(cost);
  }
  if (k>=cost) right = mid; 
  else left = mid;
  //cout << (k>=cost) << mid << endl;
}
  cout <<  right << endl;
}
