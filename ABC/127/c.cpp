#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int mx = 0;
    int mn = 100001;
    int l, r;
    for (int i=0;i<m;i++){
        cin >> l >> r;
        mx = max(mx,l);
        mn = min(mn,r);
    }
    cout << max(0,mn-mx+1) << endl;
}