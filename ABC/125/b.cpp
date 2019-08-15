#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int A[20];
    int B[20];
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> A[i];
    }
     for (int i=0;i<n;i++){
        cin >> B[i];
    }   
    int ans = 0;
    for (int i=0;i<n;i++){
        ans += max(0,A[i]-B[i]);
    }     
    cout << ans << endl;
}