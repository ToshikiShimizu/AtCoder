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
  int route[50];
  REP(i,50)route[i]=0;
  int n, m;
  cin >> n >> m;
  int b;
  REP(i,2*m){
      cin >> b;
      //dump(b);
      route[b-1]++;
      //dump(route[b-1]);
  }
  REP(i,n){
      cout << route[i] << endl;
  }
}