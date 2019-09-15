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
  string S;
  
  cin >> n;
  cin >> S;
  int size = S.size();
  //cout << S << endl;
  int ans = 0;

  while(n>0){
    
    FOR(j,0,size-n){
      int p = j;
      FOR(i,n+j,size){
        //dump(i);
        if (size-i < n-p+j)){
        //if (S.size()-p < n-(p-j)){
          //cout << n << " " << p << " " << j << endl;
          break; 
        }
        if (S[i] == S[p]){
          if (++p==n+j){
            cout << n << endl;
            return 0;
          }
        }else{
            p=j+(S[i]==S[j]);
        }
      }
    }
    n--;
  }
  cout << 0 << endl;
}
