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
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  string t = s;
  REP(i,n){
      int min_j = -1;
      for (int j=i+1; j<n; j++){
          if (s[j] < s[i]){
                swap(s[i],s[j]);
                int sm = 0;
                REP(l,n){
                    if (s[l]!=t[l])sm++;
                }
                swap(s[i],s[j]);
                dump(sm);
                if (k >= sm){
                    if (min_j == -1){
                        min_j = j;
                    }else if(s[min_j] > s[j]){
                        min_j = j;
                    }
                    
                    
                }              
          }
      }
      if (min_j != -1){
          swap(s[i],s[min_j]);
          dump(s);
        }
      }
  cout << s << endl;
}