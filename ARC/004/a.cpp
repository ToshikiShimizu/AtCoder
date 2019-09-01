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
const int INF = 999999999;
const int MOD = (int)1e9 + 7;
const int EPS = 1e-9;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n;
  double X[100];
  double Y[100];
  double mx = 0;
  cin >> n;
  REP(i,n){
      cin >> X[i] >> Y[i];
  }
  REP(i,n){
      FOR(j,i+1,n){
          //mx = max(mx,sqrt(pow(X[i]-X[j],2.0)+pow(Y[i]-Y[j],2.0)));
          mx = max(mx,hypot(X[i]-X[j],Y[i]-Y[j]));
      }
  }
  //cout << setprecision(10) << mx << endl;
  printf("%.8f\n",mx);
}