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
  int n;
  cin >> n;
  int A[1000][1000-1];
  REP(i,n)REP(j,n-1){
      cin >> A[i][j];
      A[i][j]--;
  }
  int ans = 0;
  int count[1000];
  REP(i,n)count[i] = 0;
  while(1){
      bool game = false;
      int visited[n];
      REP(i,n)visited[i]=0;
      REP(i,n){
          if (count[i]==n-1)continue;
          if (visited[i]==1)continue;
          int next = A[i][count[i]];
          if (visited[next]==1)continue;
          if (A[next][count[next]]==i){
              visited[i]++;visited[next]++;
              count[i]++;count[next]++;
              game = true;
          }
      }
      if (!game){
          break;
      }else{
          ans++;
      }
      game = false;
  }
  REP(i,n){
      if (count[i]!=n-1){
          ans = -1;
      }
  }
  cout << ans << endl;

}