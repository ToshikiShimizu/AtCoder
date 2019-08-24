#include<bits/stdc++.h>
using namespace std;
int main(){
    string S;
    string T;
    cin >> S;
    cin >> T;
    for (int i=0;i<S.size();i++){
        if (S==T){
            cout << "Yes" << endl;
            return 0;
        }
        S = S.back() + S;
        S.pop_back();
    }
    cout << "No" << endl;
    return 0;
}