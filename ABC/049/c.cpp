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
  string words[] = {"dream", "dreamer", "erase", "eraser"};
  string S;
  cin >> S;
  REV(S);
  REP(i,4){
      REV(words[i]);
  }
  int p = 0;
  while(p<S.size()){
    bool success = false;
    REP(i,4){
        string word = words[i];
            if (S.substr(p,word.size()) == word){
                success = true;
                p+=word.size();
                break;
            }

        }
    if (!success){
            cout << "NO" << endl;
            return 0;
        }  
    }
  cout << "YES" << endl;
}