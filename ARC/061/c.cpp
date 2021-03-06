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
ll ans = 0;
void rec(ll sm, ll old, int i,string S){
    if (i==S.size()){
        sm += old;
        //cout << sm << endl;
        ans += sm;
    }else{
        rec(sm+old,S[i]-'0',i+1,S);
        rec(sm,10*old+S[i]-'0',i+1,S);
    }

}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  string S;
  cin >> S;
  rec(0,S[0]-'0',1,S);
  cout << ans << endl;

}
