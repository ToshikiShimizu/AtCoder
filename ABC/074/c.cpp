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
  int A,B,C,D,E,F;
  cin >> A >> B >> C >> D >> E >> F;
  double mx = 0;
  int sugar_water;
  int sugar;
  A *= 100;
  B *= 100;
  for (int a = 0; a*A<=F; a++){
      for (int b = 0; a*A+b*B <= F; b++){
          for (int c = 0; a*A+b*B+c*C<= F; c++){
              for (int d = 0; a*A+b*B+c*C+d*D <= F; d++){
                  if(100*(c*C+d*D)<=E*(a*A+b*B)){
                      double tmp = (c*C+d*D) /(double) (a*A+b*B+c*C+d*D);
                      if (tmp>=mx){    
                        mx = tmp;
                        sugar_water = a*A+b*B+c*C+d*D;
                        sugar = c*C+d*D;
                        //cout << a << " " << b << " " << c<< " " << d << " " << tmp << endl;
                      }
                  }
              }
          }
      }
  }
  cout << sugar_water << " " << sugar << endl;
}