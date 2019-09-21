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

vector<vector<int> > bfs(vector<vector<int> > black, int H, int W,vector<vector<int> > dist ){
    queue<tuple<int,int,int>> Q;
    tuple<int,int,int> t;
    int d;
    int x,y;
    REP(h,H)REP(w,W){
        if (black[h][w]==1)Q.push(make_tuple(h, w, 0));
    }

    while(!Q.empty()){
        t = Q.front();Q.pop();
        x = get<0>(t);y = get<1>(t);d = get<2>(t);
        if (dist[x][y] <= d)continue;
        dist[x][y] = d;
        for (int i=0;i<4;i++){
            if (0<=x+DX[i] && x+DX[i]<dist.size() && 0<=y+DY[i] && y+DY[i]<dist[0].size()){
                int d_next = d+1;
                
                if (dist[x+DX[i]][y+DY[i]]>d_next)
                    Q.push(make_tuple(x+DX[i],y+DY[i],d_next));
            }
        }
    }
    return dist;
}

void print_vector(vector<vector<int> > vector){
    for (int i = 0; i < vector.size(); i++){
        for (int j = 0; j < vector[i].size(); j++)
            cout << vector[i][j] << " ";
        cout << endl;
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int H,W;
    cin >> H >> W;
    string S;
    vector<vector<int> > black(H, vector<int> (W, 0) );
    for (int h=0; h<H;h++){
        cin >> S;
        for (int w=0; w<W; w++){
            if (S[w]=='#'){
                black[h][w]=1;
            }
        }   
    }
    vector<vector<int> > dist(H, vector<int> (W, INTINF) );
    dist=bfs(black,H ,W, dist);
    
    int mx = 0;
    REP(h,H)REP(w,W){
        
        mx = max(dist[h][w],mx);
    }
    cout << mx << endl;
}
