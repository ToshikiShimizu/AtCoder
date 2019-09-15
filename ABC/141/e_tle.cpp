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

 bool check(string S, int n){
    int size = S.size();    
    int a;
    FOR(j,0,size-n){
      FOR(i,n+j,size-n+1){
        a = 0;
        while(S[i+a] == S[j+a]){
          if (++a==n)return true;
        }
      }
    }
    return false;
  }

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n;
  string S;
  
  cin >> n;
  cin >> S;
  

    int right = n;
    int left = 1;
    int mid;
    int ans = 0;
    while(left<right){
        mid = (left+right)/2;
        dump(mid);
        dump(check(S,mid));
        if(check(S,mid)){
            left = mid+1;
            ans = max(ans,mid);
        }else
        {
            right = mid;
        }
    }
  cout << ans  << endl;

}
