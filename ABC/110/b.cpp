#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,max_x,min_y;
    int x,y;
    cin >> n>>m>>max_x>>min_y;
    for (int i;i<n;i++){
        cin >> x;
        max_x = max(max_x,x);
    }
    for (int i;i<m;i++){
        cin >> y;
        min_y = min(min_y,y);
    }
    if (max_x < min_y){
        cout << "No ";
    }
    cout << "War" << endl;
}