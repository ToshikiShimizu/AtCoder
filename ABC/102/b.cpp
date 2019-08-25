#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin >> N;
    int a;
    vector<int> v;
    for (int i=0;i<N;i++){
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    cout << v.back() - v.front() << endl;
}
