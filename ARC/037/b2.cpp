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

const int MAX_N = 100;
int link[MAX_N][MAX_N] = {};
int n, m;
int visited[MAX_N] = {};


bool dfs(int idx, int prev, int n){
    //dump(idx);
    //dump(d);
    if (visited[idx]==1)return false;
    visited[idx] = 1;
    //dump(n)
    REP(i,n){
        if (link[idx][i]==1){
            if(visited[i]==0){
                if(!dfs(i,idx,n))return false;
            }else if(prev == i){
                continue;
            }else{
                return false;
            }
        }
    }
    return true;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n,m ;
  cin >> n >> m;
  int u, v;
  REP(i,m){
      cin >> u >> v;
      link[u-1][v-1] = link[v-1][u-1] = 1;
  }
  REP(i,n){
      visited[i]=0;
    }
  int ans = 0;
  REP(idx,n){
      if (dfs(idx,-1,n))ans++;
  }
  cout << ans << endl;
  
}
