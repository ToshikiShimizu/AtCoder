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
   
    int dx[] = {1,-1,0,0};
    int dy[] = {0,0,1,-1};
    if (valid[x][y])Q.push(make_tuple(x, y, 0));
 
    while(!Q.empty()){
        t = Q.front();Q.pop();
        x = get<0>(t);y = get<1>(t);d = get<2>(t);
        if (dist[x][y] <= d)continue;
        dist[x][y] = d;
        for (int i=0;i<4;i++){
            if (0<=x+dx[i] && x+dx[i]<valid.size() && 0<=y+dy[i] && y+dy[i]<valid[0].size()){
                int d_next = d;
                if (!valid[x+dx[i]][y+dy[i]])d_next++;   
                if (dist[x+dx[i]][y+dy[i]]>d_next)
                    Q.push(make_tuple(x+dx[i],y+dy[i],d_next));
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
    H = 10;
    W = 10;

    string S;
    int s_h, s_w,g_h, g_w;
    vector<vector<int> > valid(H, vector<int> (W, 1) );
    for (int h=0; h<H;h++){
        cin >> S;
        for (int w=0; w<W; w++){
            if (S[w]=='x'){
                valid[h][w]=0;
            }
        }
        
    }
    //print_vector(valid);
    vector<vector<int> > dist(H, vector<int> (W) );
    for (int h=0; h<H;h++){
        for (int w=0; w<W; w++){
            if (valid[h][w]==0){
                valid[h][w]=1;
                dist = bfs(valid,h,w);//もし陸続きになっているならば、ここをスタートにしても問題ない
                bool ok = true;
                //print_vector(valid);
                REP(h2,H)REP(w2,W){
                    if (valid[h2][w2]==1){
                        //cout << h << " " << w << endl;
                        //dump(h2);
                        //dump(w2);
                        //dump(dist[h2][w2]);
                        if (dist[h2][w2] != 0){
                            ok = false;
                        }
                    }
                    //dump(ok);

                }
                //dump(h);dump(w);dump(ok);

                if (ok){
                    cout << "YES" << endl;
                    return 0;
                }else{
                    valid[h][w]=0;
                }
                
                
            }
        }
    }
    cout << "NO" << endl;
}