#include<bits/stdc++.h>
using namespace std;

double MooreFunc(double x, double P){
    return x + P*pow(2.0,(-x/1.5));
}

double TernarySearch(double left, double right, double P){
    
    double mid_l = left + (right-left)/3.0;
    double mid_r = left + (right-left)*2.0/3.0;

    if (right-left<1e-8){
        return mid_l;
    }
    if (MooreFunc(mid_l, P) < MooreFunc(mid_r, P)){
        return TernarySearch(left, mid_r,P);
    }else{
        return TernarySearch(mid_l,right,P);
    }
}

int main(){
    double P;
    cin >> P;
    printf("%.12f\n",MooreFunc(TernarySearch(0,P,P),P));
}
