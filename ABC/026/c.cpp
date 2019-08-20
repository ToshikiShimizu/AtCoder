#include<bits/stdc++.h>
using namespace std;
static const int N_MAX = 20;
static const int INF = 1<<21;
int solve(int n, vector<int> B[]){
    //cout << n << endl;
    if (B[n].size()==0)return 1;
    int mx = 0;
    int mn = INF;
    int s;
    for(int i=0;i< B[n].size();i++){
        s = solve(B[n][i],B);
        mn = min(s,mn);
        mx = max(s,mx);
    }
    return mn+mx+1;
}

int main(){
    vector<int> B[N_MAX+1];
    int n;
    int a;
    cin >> n;
    for (int i=0;i<n-1;i++){
        cin  >> a ;
        B[a].push_back(i+2);
    }
    cout << solve(1,B) << endl;
}
