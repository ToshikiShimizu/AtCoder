#include<bits/stdc++.h>
using namespace std;
int main(){
    double P;
    cin >> P;
    double x = -1.5*log2(1.5/P/log(2.0));
    x = max(0.0,x);
    double t = x + P * pow(2.0, -x/1.5);
    cout << setprecision(10)<< t<< endl;
}