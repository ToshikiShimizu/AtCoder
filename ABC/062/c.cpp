#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
static const ll INF = 1e9;

ll S[3];
ll ans = INF;
void calc_half(int a, int b){
    S[1] = ll (a)*(b/2);
    S[2] = ll (a)*(b-b/2);
    ans = min(ans, max(S[0],max(S[1],S[2]))-min(S[0],min(S[1],S[2])));
    //cout << a<<" "<< b<<" " <<S[0] << " " << S[1] << " " << S[2] << " " <<ans << endl;
}

void calc(int H, int W){
    for (int h=1;h<H;h++){
        S[0] = ll (H-h)*W;
        calc_half(h,W);
        calc_half(W,h);
    }
}
int main(){
    int H, W;
    cin >> H >> W;
    calc(H, W);
    calc(W, H);
    cout << ans << endl;
}