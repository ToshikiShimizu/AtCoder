#include <bits/stdc++.h>
using namespace std;
int main(){
    int A, B;
    cin >> A >> B;
    int mx = max(A,B);
    int ans = 2*mx;
    if (A!=B)ans--;
    cout << ans << endl;
    
}