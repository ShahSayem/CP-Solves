#include <bits/stdc++.h>
using namespace std;
#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);

///.........Graph.........///
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};
char graph[505][505];
bool vis[505][505];
int store[505][505];
int m, n, cnt = 0;

bool canReach(int x, int y)
{
    if ((x < m && y < n) && (x >= 0 && y >= 0)){
        if ((graph[x][y] == '.' || graph[x][y] == 'C') && !vis[x][y])
            return true;
    }

    return false;
}

void dfs(int x, int y)
{
    if (graph[x][y] == 'C')
        cnt++;

    vis[x][y] = 1;
    int xx, yy;
    for (int i = 0; i < 4; i++){
        xx = x+X[i];
        yy = y+Y[i];

        if (canReach(xx, yy))
            dfs(xx, yy);
    }
}

void solve()
{
    int q, x, y;
    cin>>m>>n>>q;

    memset(store, -1, sizeof(store));
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin>>graph[i][j];
        }
    }

    while (q--){
        memset(vis, 0, sizeof(vis));
        cin>>x>>y;
        x--, y--;
        cnt = 0;

        if (store[x][y] == -1){
            dfs(x, y);
            cout<<cnt<<"\n";

            for (int i = 0; i < m; i++){
                for (int j = 0; j < n; j++){
                    if (vis[i][j]){
                        store[i][j] = cnt;
                    }
                }
            }
        }
        else {
            cout<<store[x][y]<<"\n";
        }
        
    }  
}

int main()
{
    Shah_Sayem

    int tc = 1;
    cin>>tc;
    for (int i = 1; i <= tc; i++){
        cout<<"Case "<<i<<":\n";
        solve();
    }

    return 0;
}
