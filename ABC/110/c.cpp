#include<bits/stdc++.h>
using namespace std;
int main(){
    string S;
    string T;
    cin >> S;
    cin >> T;
    map<char, char> map_a; 
    map<char, char> map_b; 
    for (int i=0;i<S.size();i++){
        auto itr = map_a.find(S[i]);  
        if( itr != map_a.end() && itr->second!=T[i]) {
            cout << "No" << endl;
            return 0;
        } else {
            map_a[S[i]] = T[i];
        }
        itr = map_b.find(T[i]);   
        if( itr != map_b.end() && itr->second!=S[i]) {
            cout << "No" << endl;
            return 0;
        } else {
            map_b[T[i]] = S[i];
        }
    }
    cout << "Yes" << endl;
}