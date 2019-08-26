#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n,t;
    ll cur;
    cin >> n >> t ;
    ll begin = -1;
    ll end = -1;
    ll ans = 0;
    for (int i=0;i<n;i++){
        cin >> cur;
        if (end < cur){
            ans += (end-begin);
            begin = cur;
            end = cur + t;
        }else{
            end = cur + t;
        }
    }
    ans += (end-begin);
    cout << ans << endl;
}