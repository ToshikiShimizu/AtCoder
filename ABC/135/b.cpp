#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int p;
    int sum = 0;
    for (int i=0;i<n;i++){
        cin >> p;
        if (p!=i+1){
            sum++;
        }
    }
    if (sum<=2){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

}