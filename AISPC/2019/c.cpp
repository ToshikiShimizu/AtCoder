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

int board[400][400];
bool visited[400][400];
int H, W;
ll color[2];

const int BLACK = 0;
const int WHITE = 1;

void dfs(int x, int y){
    visited[x][y] = true;
    color[board[x][y]]++;
    for (int i=0;i<4;i++){
        if (0<=x+DX[i] && x+DX[i]<H && 0<=y+DY[i] && y+DY[i]<W){
            if (board[x][y]!=board[x+DX[i]][y+DY[i]])
                if (!visited[x+DX[i]][y+DY[i]])
                    dfs(x+DX[i],y+DY[i]);
            }
        }
    
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

    cin >> H >> W;
    string S;
    for (int h=0; h<H;h++){
        cin >> S;
        for (int w=0; w<W; w++){
            if (S[w]=='.'){
                board[h][w] = WHITE;
            }
        }
    }
    //print_vector(board);
    ll ans = 0;
    REP(h,H)REP(w,W){
        if (!visited[h][w]){
            color[BLACK] = 0;
            color[WHITE] = 0;
            dfs(h,w);
            ans += color[BLACK]*color[WHITE];

        }
    }
    cout << ans << endl;

}