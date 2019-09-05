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
  int n, a;
  cin >> n;


  
  vector<int> A;
  REP(i,n){
      cin >> a;
      A.push_back(a);
  }
  ll mn = INF;
  REP(i,2){
    ll sum = 0;
    ll op = 0;
    REP(j,n){
        sum += A[j];
        if((i+j)%2==0 && sum >= 0){
            op += (sum+1);
            sum = -1;
        }else if((i+j)%2==1 && sum <= 0){
            op += (-sum+1);
            sum = 1;
        }
        //cout << sum <<  " " << op <<endl;
    }
    mn = min(mn,op);
  }
  cout << mn << endl;

}