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
  int n, m;
  cin >> n >> m;
  int a,b,c,d;
  vector<pair<int, int> > v_s;
  vector<pair<int, int> > v_p;
  REP(i,n){
      cin >> a >> b;
      v_s.push_back(make_pair(a,b));
      
  }
  REP(i,m){
      cin >> c >> d;
      v_p.push_back(make_pair(c,d));
  }
  for (auto s: v_s){
      int min_d = INTINF;
      int argmin;
      REP(i,v_p.size()){
          int d = abs(s.first - v_p[i].first) + abs(s.second - v_p[i].second);
          if (d < min_d){
              argmin = i+1;
              min_d = d;
          }
      }
      cout << argmin << endl;
  }
}
