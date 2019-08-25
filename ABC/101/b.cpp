#include <bits/stdc++.h> 
using namespace std;
int main() {
    string S;
    cin >> S;
    int num = atoi(S.c_str());
    int sum = 0;
    for(int i=0;i<S.size();i++){
        sum += (S[i]-'0');
    } 
    if (num%sum==0)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}