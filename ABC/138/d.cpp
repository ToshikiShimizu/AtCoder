#include<bits/stdc++.h>
using namespace std;
static const int N_MAX = 200000;

void rec(int idx, int add, vector<int> nodes[], int counter[]){
    counter[idx] += add;
    for (int i=0;i<nodes[idx].size();i++){
        rec(nodes[idx][i],add,nodes,counter);
    }
}

int main(){
    vector<int> nodes[N_MAX+1];
    int counter[N_MAX+1];
    int n,q;
    int a,b;
    cin >> n >> q;
    for (int i=0;i<n-1;i++){
        cin  >> a >>b;
        nodes[a].push_back(b);
    }


    for (int i=0;i<n;i++){
        counter[i+1]=0;
    }
    for (int i=0;i<q;i++){
        cin  >> a >>b;
        rec(a,b,nodes,counter);
    }
    for (int i=0;i<n;i++){
        if (i!=0)cout << " ";
        cout << counter[i+1];
    }
    cout << endl;

}
