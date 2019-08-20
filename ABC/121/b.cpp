#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,c;
    int counter = 0;
    int sum;
    cin >> n >> m >>c;
    int B[20];
    int a;
    for (int j=0;j<m;j++){
        cin >> B[j];
    }
    
    for (int i=0;i<n;i++){
        sum = 0;
        for (int j=0;j<m;j++){
            cin >> a;
            sum += a*B[j];
        }
        if (sum + c > 0)counter++;
    }
    cout << counter << endl;
}