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

int CountDigits(int n){
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
  int a,b;
  cin >> a >> b;
  int sm = a*pow(10,CountDigits(b))+b;
  //cout << sm << endl;
  for (int i=0;i*i<=sm;i++){
      if (i*i==sm){
          cout << "Yes" << endl;
          return 0;
      }
  }
  cout << "No" << endl;
}
