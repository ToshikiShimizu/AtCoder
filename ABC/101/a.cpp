#include<bits/stdc++.h>
using namespace std;
int main(){
    string S;
    char s;
    int ans = 0;
    cin >> S;
    for(int i=0;i<S.size();i++){
        s = S[i];
        if (s=='+'){
            ans++;
        }else{
            ans--;
        }
    }
    cout << ans << endl;
}