#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    int ans = b;
    if (a < 13){
        ans /= 2;
    } 
    if (a < 6){
        ans = 0;
    }
    cout << ans << endl;
}