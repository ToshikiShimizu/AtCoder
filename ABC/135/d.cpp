#include <bits/stdc++.h>
using namespace std;
#define REP(i,a) for(int i = 0; i < (a); i++)
typedef long long ll;
const int MOD = 1e9 + 7;

ll dp[100001][13];

signed main(){
    string S;
    cin >> S;
    dp[0][0] = 1;
    REP(i,S.size()){
        REP(j,10){
            int c = S[i] - '0';
            if(S[i] == '?' || c == j){
                REP(k,13){
                    dp[i + 1][(k * 10 + j) % 13] += dp[i][k];
                    dp[i + 1][(k * 10 + j) % 13] %= MOD;
                }
            }
        }
    }
    cout << dp[S.size()][5] << endl;
}
