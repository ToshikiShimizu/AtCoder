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

int N, W;
int n_theta = 30;
int w_theta = 1000;
int v_theta = 1000;
vector<int> vec_v;
vector<int> vec_w;
int vmax, wmax = 0;
int n1,n2;
void solve1(){
  vector<pair<ll, ll> > vw;
  //pair<ll, ll> vw[1<<16];
  dump(1<<n1);
  REP(i,1<<n1){
    ll sv = 0;
    ll sw = 0;
    REP(j, n1){
      if (i>>j & 1){
        sv += vec_v[j];
        sw += vec_w[j];
      }
    }
    vw.push_back(make_pair(sw,sv));
    //vw[i] = make_pair(sw,sv);
  }
  SORT(vw);
  //sort(vw,vw+(1<<n1));
  int m = 1;
  for(int i=1;i < (1<<n1);i++) {
      if(vw[m-1].second < vw[i].second) vw[m++] = vw[i];
  }
  dump(m);
  // for (auto x: vw){
  //   cout << x.first << " " << x.second << endl;
  // }
  ll ans = 0;
  int cnt = 0;
  
  
  REP(i,1<<n2){
    ll sv = 0;
    ll sw = 0;
    REP(j, n2){
      if (i>>j & 1){
        sv += vec_v[j+n1];
        sw += vec_w[j+n1];
      }
    }
    if(W>=sw){

      auto itr = upper_bound(vw.begin(),vw.begin()+m, make_pair(W-sw,LLINF))-1;
      ans = max(ans,sv+(*itr).second);
      // auto itr = upper_bound(vw,vw+m, make_pair(W-sw,LLINF))-1;
      // ans = max(ans,sv+itr->second);
      cnt++;
    }
    //dump(sv);
    //dump(*itr);
    
  }
  cout << ans << endl;
  //cout << cnt << endl;
}

void solve2(){
  ll dp[W+1];
  REP(i,W+1)dp[i] = 0;
  REP(i,N){
    for(int j = W; j>=vec_w[i]; j--){
      dp[j] = max(dp[j],dp[j-vec_w[i]]+vec_v[i]);
    }
  }
  cout << dp[W] << endl;
  //REP(i,W+1){cout << dp[i] << endl;}

}


void solve3(){
  ll dp[v_theta*N+1];
  REP(i,v_theta*N+1)dp[i] = LLINF;
  dp[0] = 0;
  REP(i,N){
    for(int j = v_theta*N; j>=vec_v[i]; j--){
      if (dp[j-vec_v[i]]+vec_w[i]<=W){
        dp[j] = min(dp[j],dp[j-vec_v[i]]+vec_w[i]);
      }
    }
  }
  ll mx = 0;
  int argmx;
  REP(i,v_theta*N+1){
    if(dp[i]!=LLINF){
      mx = max(mx,dp[i]);
      argmx = i;
    }
  }
  cout << argmx << endl;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  cin >> N >> W;
  n1 = N/2;
  n2 = N-n1;
  int v, w;

  REP(i,N){
    cin >> v >> w;
    vec_v.push_back(v);
    vec_w.push_back(w);
    vmax = max(vmax, v);
    wmax = max(wmax, w);
  }
  if (N<=n_theta){
    solve1();
    dump(1);
  }else if(wmax<=w_theta){
    solve2();
    dump(2);
  }else{
    solve3();
    dump(3);
  }
}
