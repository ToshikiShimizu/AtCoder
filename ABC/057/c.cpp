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
   ll n;
   int ans = INF;
   cin >> n;
   for (ll i=1;i*i<=n;i++){
       if (n%i==0){
           //dump(n/i);
           ans = min(ans, CountDigits(n/i));
       }
   }
   cout << ans << endl;
}