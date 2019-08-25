#include<bits/stdc++.h>
using namespace std;
int main(){
    int A, B;
    cin >> A >> B;
    int n = abs(A-B);
    int cnt = 0;
    while(n){
        cnt++;
        if (n>=8){
            n -= 10;
        }else if(n>=3){
            n -= 5;
        }else{
            n-=1;
        }
        if (n < 0)n*=-1;
    }
    cout << cnt << endl;
}