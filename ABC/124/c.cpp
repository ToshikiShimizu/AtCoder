#include <bits/stdc++.h>
using namespace std;

int main(){
    string S;
    
    cin >> S;
    int ans_a = 0;
    int ans_b = 0;

    for (int i=0;i<S.size();i++){
        if( i%2  == S[i] - '0' ){
            ans_a++;
        }else{
            ans_b++;
        }
    }
    cout << min(ans_a,ans_b) << endl;
}