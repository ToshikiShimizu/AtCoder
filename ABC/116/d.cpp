#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    priority_queue<ll> MinusPQ;
    priority_queue<pair<ll,ll > > PlusPQ;
    set<int> S;
    int n,k,t,d;
    vector<pair<ll, ll> > sushi;
    cin >> n >> k;
    ll sum = 0;
    
    for (int i=0;i<n;i++){
        cin >> t >>d;
        sushi.push_back(make_pair(d,t));
    }
    sort(sushi.rbegin(), sushi.rend());
    for (int i = 0; i < n; i++) {
        if (i<k){
            if (S.count(sushi[i].second)){
                MinusPQ.push(-sushi[i].first);
            }else{
                S.insert(sushi[i].second);
                
            }
            sum += sushi[i].first;
        }else{
            PlusPQ.push(sushi[i]);
        }
    }
 
    sum+=pow(S.size(),2);
    ll mx = sum;
  
    while(MinusPQ.size()>0 && PlusPQ.size()>0){

        if(S.count(PlusPQ.top().second)==0){
            long long diff = pow(S.size()+1,2)-pow(S.size(),2)+PlusPQ.top().first+MinusPQ.top();
            S.insert(PlusPQ.top().second);
            sum += diff;
            mx = max(sum,mx);
        }
        MinusPQ.pop();
        PlusPQ.pop();
    }
    cout << mx << endl;
}