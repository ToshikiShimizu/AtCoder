#include<bits/stdc++.h>
using namespace std;
static const int N_MAX = 200000;

void rec(int idx, int add, vector<int> nodes[], int counter[]){
    counter[idx] += add;
    for (int i=0;i<nodes[idx].size();i++){
        rec(nodes[idx][i],counter[idx],nodes,counter);
    }
}

void dfs( vector<int> nodes[], int counter[], int visited[]){
    stack<pair<int,int> > S;
    S.push(make_pair(1,0));
    while(S.size()){
        pair <int,int> p = S.top();
        S.pop();
        if (visited[p.first]==1){
            continue;
        }
        visited[p.first]=1;
        counter[p.first]+=counter[p.second];
        //cout << p.first << endl;
        for (int i=0;i<nodes[p.first].size();i++){
                S.push(make_pair(nodes[p.first][i],p.first));   
            }
    }

}

int main(){
    vector<int> nodes[N_MAX+1];
    int counter[N_MAX+1];
    int visited[N_MAX+1];
    int n,q;
    int a,b;
    cin >> n >> q;
    for (int i=0;i<n-1;i++){
        cin  >> a >>b;
        nodes[a].push_back(b);
        nodes[b].push_back(a);
    }


    for (int i=0;i<n;i++){
        counter[i+1]=0;
        visited[i+1]=0;
                
    }
    for (int i=0;i<q;i++){
        cin  >> a >>b;
        counter[a]+=b;
        
    }
    //rec(1,0,nodes,counter); //嘘解法
    dfs(nodes,counter,visited);
    for (int i=0;i<n;i++){
        if (i!=0)cout << " ";
        cout << counter[i+1];
    }
    cout << endl;

}
