#include<bits/stdc++.h>
#define INF 1e9
using namespace std;

vector<vector<int> > bfs(vector<vector<int> > valid, int x, int y){
    vector<vector<int> > dist(valid.size(), vector<int>(valid[0].size(), INF));
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
    cin >> H >> W;
    string S;
    int s_h, s_w,g_h, g_w;
    vector<vector<int> > valid(H, vector<int> (W, 1) );
    for (int h=0; h<H;h++){
        cin >> S;
        for (int w=0; w<W; w++){
            if (S[w]=='#'){
                valid[h][w]=0;
            }else if(S[w]=='s'){
                s_h = h;
                s_w = w;
            }else if(S[w]=='g'){
                g_h = h;
                g_w = w;
            }
        }
        
    }
    //print_vector(valid);
    vector<vector<int> > dist(H, vector<int> (W) );
    dist = bfs(valid,s_h ,s_w);
    if (dist[g_h][g_w]<=2){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}