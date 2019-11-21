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

ll fact(int a){
    ll r = 1;
    REP(i,a){
        r = (r * (i+1)) % MOD;
    }
    dump(r);
    return r;
}

ll inv(int a){
    int p = 32;
    ll mem[p];
    mem[0] = a;
    REP(i,p-1){
        mem[i+1] = (mem[i] * mem[i])%MOD;
    }
    ll r = 1;
    ll m = MOD-2;
    for (int i=p-1;i>=0;i--){
        if (m >= pow(2,i)){
            r *= mem[i];
            //dump(pow(2,i));
            m -= pow(2,i);
            r %= MOD;

        }
    }
    //dump(m);
    //dump(r);
    return r;
}

int comb(int a,int b){
    ll r;
    dump(a);
    dump(b);
    r = fact(a)*inv(fact(a-b)) % MOD;
    r = r * inv(fact(b)) % MOD;
    return int(r);
}

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

}
