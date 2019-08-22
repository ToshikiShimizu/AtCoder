#include<bits/stdc++.h>
using namespace std;
int main(){
    int x1, y1, x2, y2;
    int d;
    cin >> x1 >> y1 >> x2 >> y2;
    for (int i=0;i<2;i++){
        if (i!=0)cout << " ";
        if (x1==x2){
            d = y1 - y2;
            y1 = y2;
            x2 += d;
        }else{
            d = x1 - x2;
            y2 += d;
            x1 = x2;
        }
        cout << x2 << " " << y2;
    }
    cout << endl;
}
