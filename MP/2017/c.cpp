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
  int n,k;
  cin >> n >> k;
  int a;
  string s;
  vector<int> A;
  vector<string> pos, neg;
  int max_n = 100000;
  int pos_a[max_n];
  REP(i,max_n)pos_a[i]=0;

  REP(i,k){
      cin >> a;
      pos_a[a-1] = 1;
  }
  
  int mn_size = INTINF;
  A.push_back(-1);
  REP(i,n){
      cin >> s;
      if (pos_a[i]==1){
          pos.push_back(s);
          mn_size = min(mn_size, (int) s.size());
      }else{
          neg.push_back(s);
      }
  }
  //dump(pos.size());
  //dump(neg.size());
  if (neg.size()==0){
      cout << "" << endl;
      return 0;
  }
  int mx_match = mn_size;
  bool flag = false;
  REP(i,mn_size){
      char key = pos[0][i];
      for (auto s: pos){
          if(s[i] != key){
              mx_match = i;
              flag = true;
          }
      }
      if (flag)break;
  }
  
  dump(mx_match);
  int ans = 0;
  for (auto s: neg){
      REP(i,mx_match){
          if(s[i] == pos[0][i]){
              ans = max(ans,i+1);
          }else break;
      }      
  }
  //dump(ans);
  if (ans==mx_match)cout << -1 << endl;
  else cout << pos[0].substr(0,ans+1) << endl;
}
