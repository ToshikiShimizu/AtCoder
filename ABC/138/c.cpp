#include<bits/stdc++.h>
using namespace std;
static const int N_MAX = 1000;
int main(){
    int n;
    cin >> n;
    double V[N_MAX];
    double sum = 0;
    for (int i=0;i<n;i++){
        cin >> V[i];
    }
    sort(V,V+n);
    for (int i=0;i<n;i++){
        int j;
        if (i==0){
            j = 1;
        }else{
            j = i;
        }
        sum += (V[i]/pow(2,n-j));
    }
    cout << sum  << endl;
}