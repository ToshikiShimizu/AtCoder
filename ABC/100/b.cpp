#include<bits/stdc++.h>
using namespace std;
int main(){
    int d,n;
    cin >> d >> n;
    if (n==100)n++;
    cout << (int) pow(100,d)*n << endl;
}
