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
  string S, T;
  cin >> S >> T;
  string ans = "";
  string cand = S;
  if(S.size()<T.size()){cout << "UNRESTORABLE" << endl;return 0;}
  for(int i = S.size()-T.size();i>=0;i--){
      bool ok = true;
      REP(j,T.size()){
          if (S[i+j] != T[j] && S[i+j]!= '?')ok = false;
      }
      if (ok){
          REP(k,S.size()){
              if(i<=k && k<i+T.size()){
                  cand[k] = T[k-i];
              }else if(S[k]=='?'){
                  cand[k] =  'a';
              }else{
                  cand[k] =  S[k];
              }
          }
          cout << cand << endl;
          if (ans.size()==0 || cand < ans){
              ans = cand;
          }
      }
  }
  if (ans.size()==0)cout << "UNRESTORABLE" << endl;
  else cout << cand << endl;

}