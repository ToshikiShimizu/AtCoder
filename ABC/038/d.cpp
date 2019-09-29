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

vector<vector<int> > v;
int n;

int dfs(int i){
  if (v[i][3]==1)return v[i][2];
  REP(j,i){
    if (v[i][0] > v[j][0] && v[i][1] > v[j][1]){
      v[i][2] = max(v[i][2],dfs(j)+1);
    }
  }
  v[i][3] = 1;
  return v[i][2];
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  
  
  cin >> n;
  int w, h;
  int mx = 1;
  REP(i,n){
    cin >> w >> h;
    vector<int> temp = {w,h,1,0};
    v.push_back(temp);
  }
  SORT(v);
  
  REP(i,n){
    mx = max (mx, dfs(i));
  }

  // for (auto x:v){
  //   for (auto y:x)
  //   cout << y << " ";
  //   cout << endl;
  // }
  cout << mx << endl;
  

}
