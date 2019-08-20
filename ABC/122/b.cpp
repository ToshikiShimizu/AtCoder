#include<bits/stdc++.h>
using namespace std;
int main(){
    string S;
    cin >> S;
    int mx = 0;
    int sum = 0;
    set<char>  acgt {'A','C','G','T'};
    for (int i=0;i<S.size();i++){
        if (acgt.count(S[i])){
            sum++;
            mx = max(mx,sum);
        }else{
            sum = 0;
        }
    }
    cout << mx << endl;
}