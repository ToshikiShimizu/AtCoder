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
  int n,k;
  string s;

  map<string,int> dict;
  cin >> n >> k;
    REP(i,n){
        cin >> s;
        if (dict.count(s)==0)dict.emplace(s,0);
        dict[s]++;
    }
    // for(auto x : dict) {
    //     cout << x.first << " "<<x.second << endl;
    // }
    vector<int> vec;
    for(auto x : dict) {
        vec.push_back(x.second);
    }
    SORT(vec);
    // for (auto it = vec.begin(); it!=vec.end();it++)
    // cout << *it << endl;
    int ans = 0;
    int r = max(0,(int) vec.size()-k);
    REP(i,r){
        ans += vec[i];
    }
    cout << ans << endl;

}