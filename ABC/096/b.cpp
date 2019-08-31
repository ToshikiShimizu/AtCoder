#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)
#define ALL(a)  (a).begin(),(a).end()
#define SUM(a)  accumulate((a).begin(),(a).end(),0)
#define SORT(a) sort(ALL(a))
#define dump(x)  cerr << #x << " = " << (x) << endl;
typedef long long ll;
const int INF = 999999999;
const int MOD = (int)1e9 + 7;
const int EPS = 1e-9;

int main() {
    vector<int> vec;
    int n, k;
    REP(i,3){
        cin >> n;
        vec.push_back(n);
    }
    cin >> k;
    REP(i,k)*max_element(ALL(vec))*=2;
    cout << SUM(vec) <<endl;

}