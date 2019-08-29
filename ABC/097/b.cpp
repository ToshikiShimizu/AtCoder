#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin >> x;
    int mx = 0;
    for (int i=1;i<=x;i++){
        int j = 2;
        while(1){
            if (pow(i,j) <= x){
                mx = max((int) pow(i,j),mx);
                j++;
                if (i==1)break;

            }else{
                break;
            }
        }
    }
    cout << mx << endl;
}