#include<bits/stdc++.h>
using namespace std;
static const int N_MAX = 200000;
int main(){
    int n;
    int A[N_MAX+2];
    int L[N_MAX+2],R[N_MAX+2];
    L[0] = 0;
    cin >> n;
    R[n+1] = 0;
    for (int i=1;i<=n;i++){
        cin >> A[i];
    }
    for (int i=1;i<=n;i++){
        L[i] = max(L[i-1],A[i]);
        int j = n-i+1;
        R[j] = max(R[j+1],A[j]);
    }    
    for (int i = 0;i<n;i++){
        cout << max(L[i],R[i+2]) << endl;
    }

}