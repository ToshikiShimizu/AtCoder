#include<bits/stdc++.h>
using namespace std;
const long long MOD = 1000000007;
int Combination(int n, int r){
    if (n/2<r)r=n-r;
    vector<vector<long long> > dp(n+1,vector<long long>(r+1));
    for (int i=0;i<=n;i++){
        dp[i][0] = 1;
    }
    for (int i=0;i<=r;i++){
        dp[i][i] = 1;
    }
    for (int i=1;i<=n;i++)
        for (int j=1;j<i && j<=r;j++)
            dp[i][j] = (dp[i-1][j] + dp[i-1][j-1])%MOD;
    return dp[n][r];
}
map<long long, int> PrimeFactor(int n){
    map<long long, int> ret;
    for (int i=2;i*i<=n;i++){
        while(n%i==0){
            ret[i]++;
            n/=i;
        }
    }
    if (n!=1){
        ret[n] = 1;
    }
    return ret;
}

int main() {
  int n, m;
  cin >> n >> m;
  long long ans = 1;
  for(auto p : PrimeFactor(m)) {
    //cout << p.first << " " << p.second << endl;
    ans *=  Combination(n+p.second-1,p.second);
    ans = ans % MOD;
  }
  cout << ans << endl;
}