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

const int BLACK = 0;
const int WHITE = 1;

int bfs(vector<vector<int> > board, int x, int y){
    if (board[x][y] == WHITE) return 0;
    int cnt = 0;
    vector<vector<int> > visited(board.size(), vector<int>(board[0].size()));
    queue<tuple<int,int>> Q;
    tuple<int,int> t;
    if (!visited[x][y])Q.push(make_tuple(x, y)); 
    while(!Q.empty()){
        t = Q.front();Q.pop();
        x = get<0>(t);y = get<1>(t);
        if (visited[x][y])continue;
        visited[x][y] = 1;
        if (board[x][y] == WHITE) cnt++;
        for (int i=0;i<4;i++){
            if (0<=x+DX[i] && x+DX[i]<board.size() && 0<=y+DY[i] && y+DY[i]<board[0].size()){
                if (board[x][y]!=board[x+DX[i]][y+DY[i]])
                    if (!visited[x+DX[i]][y+DY[i]])
                        Q.push(make_tuple(x+DX[i],y+DY[i]));
            }
        }
    }
    return cnt;
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
    vector<vector<int> > board(H, vector<int> (W));
    for (int h=0; h<H;h++){
        cin >> S;
        for (int w=0; w<W; w++){
            if (S[w]=='.'){
                board[h][w] = WHITE;
            }else{
                board[h][w] = BLACK;
            }
        }
    }
    //print_vector(board);
    int ans = 0;
    REP(h,H)REP(w,W){
        ans += bfs(board,h,w);
    }
    cout << ans << endl;

}