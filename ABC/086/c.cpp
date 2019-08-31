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
  cin >> n;
  int t = 0;
  int x = 0;
  int y = 0;
  int t_next, x_next, y_next;
  bool success = true;
  REP(i,n){
      cin >> t_next >> x_next >> y_next;
      int dist = abs(x_next-x) + abs(y_next-y);
      if (t_next - t < dist || (t_next-t+dist)%2==1)success = false;
      t = t_next;
      x = x_next;
      y = y_next;
  }
  if (success)cout << "Yes" << endl;
  else cout << "No" << endl;
}