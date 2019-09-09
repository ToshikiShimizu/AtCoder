#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)
#define ALL(a)  (a).begin(),(a).end()
#define SUM(a)  accumulate((a).begin(),(a).end(),0)
#define SORT(a) sort(ALL(a))
#define REV(a) reverse(ALL(a))
#define dump(x)  cerr << #x << " = " << (x) << endl;
typedef long long ll;
const int INTINF = 1<<29;
const ll LLINF = 1LL<<61;
const int MOD = (int)1e9 + 7;
const double EPS = 1e-9;
const int DX[8]={ 0, 1, 0,-1, 1, 1,-1,-1};
const int DY[8]={ 1, 0,-1, 0, 1,-1, 1,-1};

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int x,y,z,k;
  cin >> x >> y >> z >> k;
  vector<ll> A,B,C;
  ll tmp;
  int m = 1000;
  set<tuple <int,int,int> > used;
  REP(i,x){
      cin >> tmp;
      A.push_back(tmp);
  }
  SORT(A);REV(A);
  REP(i,y){
      cin >> tmp;
      B.push_back(tmp);
  }
  SORT(B);REV(B);
  REP(i,z){
      cin >> tmp;
      C.push_back(tmp);
  }
  SORT(C);REV(C);
  //cout << "a" << endl;
  priority_queue<pair<ll, tuple<ll, ll, ll> > > PQ;
  auto t = make_tuple(0,0,0);
  used.insert(t);
  PQ.push(make_pair(A[0]+B[0]+C[0],make_tuple(0,0,0)));


  while(k--){
      auto e = PQ.top();PQ.pop();
      ll e0 = get<0>(e.second);
      ll e1 = get<1>(e.second);
      ll e2 = get<2>(e.second);
      cout << A[e0]+B[e1]+C[e2] << endl;
      t = make_tuple(e0+1,e1,e2);
      if ( e0 < x-1 && used.count(t)!=1){
          PQ.push(make_pair(A[e0+1]+B[e1]+C[e2],t));
          used.insert(t);
      }
      t = make_tuple(e0,e1+1,e2);
      if ( e1 < y-1 && used.count(t)!=1){
          PQ.push(make_pair(A[e0]+B[e1+1]+C[e2],t));
          used.insert(t);
      }
      t = make_tuple(e0,e1,e2+1);
      if ( e2 < z-1 && used.count(t)!=1){
          PQ.push(make_pair(A[e0]+B[e1]+C[e2+1],t));
          used.insert(t);
      }          
      
  }
}
