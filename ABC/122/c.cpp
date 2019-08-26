#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, q;
    string S;
    int count[100000];
    cin >> n >> q;
    cin >> S;
    char old = '_';
    int cnt = 0;
    for (int i=0;i<S.size();i++){
        if (old=='A' and S[i]=='C'){
            cnt++;
        }
        count[i] = cnt;
        old = S[i];
    }
    int l,r;
    for (int i=0;i<q;i++){
        cin >> l >>r;
        cout << count[r-1]-count[l-1]<< endl;
    }

}