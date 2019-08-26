#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int a,b;
    ll k;
    cin >> a >> b;
    k = b - a - 1;
    cout << k*(k+1)/2-a << endl;

}