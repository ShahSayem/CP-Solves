#include <bits/stdc++.h>
using namespace std;
 
#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1010;

///.........Graph.........///
bool graph[MAX][MAX];
bool vis[MAX][MAX];
int level[MAX][MAX];
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};
int r, c;

void bfs (int x, int y, int destX, int destY)
{
    vis[x][y] = 1;
    queue < pair<int, int> > q;
    q.push({x, y});
    
    level[x][y] = 0;
    pair<int, int> node;
    while (!q.empty()){
        node = q.front();
        q.pop();
        
        int xx, yy;
        for (int i = 0; i < 4; ++i){
            xx = node.first+X[i];
            yy = node.second+Y[i];

            if (((xx < r && yy < c) && (xx >= 0 && yy >= 0)) && (vis[xx][yy] == 0 && graph[xx][yy] == 0)){
                level[xx][yy] = level[node.first][node.second]+1;
                vis[xx][yy] = 1;
                q.push({xx, yy});

                if (xx == destX && yy == destY){
                    cout<<level[destX][destY];
                    return;
                }
            } 
        }
    }
}

void solve()
{
    memset(graph, 0, sizeof(graph));
    memset(vis, 0, sizeof(vis));
    memset(level, 0, sizeof(level));
    int m, n, x, y;
    cin>>m;

    for (int i = 0; i < m; ++i){
        cin>>x>>n;
        for (int j = 0; j < n; ++j){
            cin>>y;
            graph[x][y] = 1;
        }
    }

    int sourceX, sourceY, destX, destY;
    cin>>sourceX>>sourceY;
    cin>>destX>>destY;

    bfs(sourceX, sourceY, destX, destY);
}


int main()
{
    Shah_Sayem
    #ifndef ONLINE_JUDGE
        freopen("Input.txt", "r", stdin);
        freopen("Output.txt", "w", stdout);
        freopen("Error.txt", "w", stderr);
    #endif

    while (cin>>r>>c){
        if (r && c){
            solve();
            cout<<"\n";
        }
    }
 
    return 0;
}