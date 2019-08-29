#include<bits/stdc++.h>
#define INF 1e9
using namespace std;


int binarySearch(vector<int> S, int key){
    int right = S.size();
    int left = 0;
    int mid;
    while(left<right){
        mid = (left+right)/2;
        if(S[mid]<key){
            left = mid+1;
        }else
        {
            right = mid;
        }
    }
    return left;
}

int main(){
    int n;
    int c;
    cin >> n;
    vector<int> lis(n, INF);
    for (int i=0;i<n;i++){
        cin >> c;
        int idx = binarySearch(lis,c);
        lis[idx] = c;
    }
    
    int mx;
    for (int i=0;i<n;i++){
        if (lis[i] == INF)break;
        mx = i+1;
        //cout << mx << " ";
    }
    cout << n - mx << endl;
}