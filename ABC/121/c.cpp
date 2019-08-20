#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >>m;
    int a,b;
    vector<pair<int,int> > v;
    for (int i;i<n;i++){
        cin >> a >> b;
        v.push_back(make_pair(a,b));
    }
    sort(v.begin(),v.end());
    int drink = 0;
    long long cost = 0;
    long long  move;
    for (int i=0;i<n;i++){
        //cout << v[i].first << " " << v[i].second << endl;
        move = min(v[i].second,(m-drink));
        cost += move * v[i].first;
        drink += move;
        //cout << cost << "  " << drink << endl;
        if (drink==m)break;
    }
    cout << cost << endl;

}