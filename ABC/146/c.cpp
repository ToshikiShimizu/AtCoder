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

<<<<<<< HEAD
int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int x,y;
  cin >> x >>y;
  if ((x+y)%3 != 0){
      cout << 0 << endl;
      return 0;
  }
  if (x<y)swap(x,y);
  if (x > 2*y){
      cout << 0 << endl;
      return 0;
  }  
  int a = (x+y)/3;

  int b = x - a;
  if (a<b)swap(a,b);
  
  cout << comb(a,b) << endl;
=======
int CountDigits(ll n){
  if (n==0)return 0;
  int sum = 0;
  while(n>0){
     sum ++;
     n /= 10;
  }
  return sum;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  ll a,b;
  ll x;
  cin >> a >> b >>x;
  ll ans = 0;
  ll left = 0;
  ll right = 1e+9+1;
  while(left+1!=right){
    ll mid = (left+right)/2;
    if (a*mid + b*CountDigits(mid)<=x){
      ans = max(ans,mid);
      left = mid;
    }else{
      right = mid;
    }
  }
  cout << ans << endl;
>>>>>>> 9bc9e211920b8a6f42dbd585f51b50f22a7287a7

}
