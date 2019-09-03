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

const int MAXN = 1000;
const int MAXV = MAXN*(MAXN-1)/2;
int dp[MAXV];
int visited[MAXV];
int calculated[MAXV];
vector<int> games[MAXV];
int dfs(int v){
    if(visited[v]==1){
        if(calculated[v]==0)return -1;
        return dp[v];
    }
    visited[v] = 1;
    dp[v] = 1;
    for (int u: games[v]){
        int r = dfs(u);
        if (r == -1)return -1;
        dp[v] = max(dp[v],r+1);
    }
    calculated[v] = 1;
    return dp[v];
}


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n;
  cin >> n;
  int a;

  int id[MAXN][MAXN];
  
  int k=0;
  REP(i,n)FOR(j,i+1,n){
      id[i][j] = id[j][i] = k;
      k++;
  } 
  int old;
  REP(i,n)REP(j,n-1){
      cin >> a;
      if (j!=0){
          games[old].push_back(id[i][a-1]);
      }
      old = id[i][a-1];
  }
  REP(i,MAXV){
      dp[i]=0;
      visited[i]=0;
      calculated[i]=0;
  }
  REP(i,MAXV){    
    if (dfs(i)==-1){
        cout << -1 << endl;
        return 0;
    }
  }
  int mx = 0;
  REP(i,MAXV)mx=max(mx,dp[i]);
  cout << mx << endl;
}
