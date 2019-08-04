#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
static const int MAX = 200000;
int main(){
    int a, b;
    cin >> a >>  b;
    if ((a+b)%2==1){
        cout << "IMPOSSIBLE" <<endl;
    } else {
        cout << (a+b)/2 << endl; 
    }
}
