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

  int h,w;
  static const int size = 50;
  int black[size+2][size+2] = {};
  string S;
  cin >> h >> w;
  REP(i,h){
      cin >> S;
      REP(j,S.size()){      
        if (S[j]=='#'){
            black[i+1][j+1]=1;
        }
      }
  }
  REP(i,h){
      REP(j,w){
        if (black[i+1][j+1] == 1){
            bool flag = false;
            REP(k,4){
                if (black[i+1+DY[k]][j+1+DX[k]]==1)flag = true;
            }
            if (!flag){
                cout << "No" << endl;
                return 0;
            }
        }
      }
  }
  cout << "Yes" << endl;
}
