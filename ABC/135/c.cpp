#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int A[200000];
    int B[200000];
    cin >> n;
    for (int i=0;i<n+1;i++){
        cin >> A[i];
    }
    for (int i=0;i<n;i++){
        cin >> B[i];
    }


    long long ans = 0;
    int del;
    int sub;
    for (int i=0;i<n;i++){
        del = min(A[i],B[i]);
        A[i] -= del;
        ans += del;
        del= min(A[i+1],B[i] - del);
        A[i+1] -= del;
        ans += del;
    }
    cout << ans << endl;
    
}