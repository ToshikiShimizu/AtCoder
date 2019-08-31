#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<string> vec;
    string S;
    int n;
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> S;
        reverse(S.begin(),S.end());
        vec.push_back(S);
    }
    sort(vec.begin(), vec.end());
    for (int i=0;i<n;i++){
        reverse(vec[i].begin(), vec[i].end());
        cout << vec[i] << endl;
    }

}