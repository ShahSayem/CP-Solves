#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

///.........Graph.........///
char graph[20+5][20+5];
// vector <int> travers;
bool vis[20+5][20+5];
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};
int cnt = 0, w, h;

bool canReach(int x, int y)
{
    if ((x > 0 && x <= h) && (y > 0 && y <= w)){
        if (graph[x][y] != '#' && !vis[x][y])
            return true;
    }
    return false;
}

void dfs(int x, int y)
{
    vis[x][y] = 1;
    cnt++;
    for (int i = 0; i < 4; i++){
        int xx = x + X[i];
        int yy = y + Y[i];

        if (canReach(xx, yy))
            dfs(xx, yy);
    }
}

void solve()
{
    cin>>w>>h;

    cnt = 0;
    memset(vis, 0, sizeof(vis));
    // memset(graph, 0, sizeof(graph));
    for (int i = 1; i <= h; i++){
        for (int j = 1; j <= w; j++){
            cin>>graph[i][j];
        }
    }

    for (int i = 1; i <= h; i++){
        for (int j = 1; j <= w; j++){
            if (graph[i][j] == '@'){
                dfs(i, j);
                break;
            }
        }
    }
    cout<<cnt;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    for (int i = 1; i <= t; i++){
        cout<<"Case "<<i<<": ";
        solve();
        cout<<"\n";
    }

    return 0;
}
