#include<bits/stdc++.h>
using namespace std;
int main(){
    int Y = 10;
    int r,D,x;
    cin >> r >> D >> x;
    for(int i=0;i<Y;i++){
        x = r * x - D;
        cout << x << endl;
    }
}