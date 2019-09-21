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

vector<vector<int> > bfs(vector<vector<int> > valid, int x, int y){
    vector<vector<int> > dist(valid.size(), vector<int>(valid[0].size(), INTINF));
    queue<tuple<int,int,int>> Q;
    tuple<int,int,int> t;
    int d;
    if (valid[x][y])Q.push(make_tuple(x, y, 0));
 
    while(!Q.empty()){
        t = Q.front();Q.pop();
        x = get<0>(t);y = get<1>(t);d = get<2>(t);
        if (dist[x][y] <= d)continue;
        dist[x][y] = d;
        for (int i=0;i<4;i++){
            if (0<=x+DX[i] && x+DX[i]<valid.size() && 0<=y+DY[i] && y+DY[i]<valid[0].size()){
                if (!valid[x+DX[i]][y+DY[i]])continue;
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
    int H,W;
    int cnt_invalid = 0;
    cin >> H >> W;
    string S;
    vector<vector<int> > valid(H, vector<int> (W, 1) );
    for (int h=0; h<H;h++){
        cin >> S;
        for (int w=0; w<W; w++){
            if (S[w]=='#'){
                valid[h][w]=0;
                cnt_invalid++;
            }
        }
        
    }
    //print_vector(valid);
    vector<vector<int> > dist(H, vector<int> (W) );
    dist = bfs(valid,0 ,0);
    if (dist[H-1][W-1]==INTINF)cout << "-1" << endl;
    else cout << H*W-cnt_invalid-dist[H-1][W-1]-1 << endl;
}
