#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int A[100000];
    int L[100002];
    int R[100002];
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> A[i];
    }
    L[0] = 0;
    R[n+1] = 0;
    for (int i=1;i<n+1;i++){
        int j = n-i-1;
        L[i] = __gcd(L[i-1],A[i-1]);
        R[j] = __gcd(R[j+1],A[j+1]);
    }  
    int mx = 0;
    for (int i=0;i<n+2;i++){
        mx = max(mx, __gcd(L[i],R[i]));
    }
    cout << mx << endl;
}