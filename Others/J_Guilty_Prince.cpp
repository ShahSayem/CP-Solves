#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
///.........Graph.........///
char graph[20][20];
bool vis[20][20];
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};
int cnt = 0, w, h;

bool canReach(int x, int y)
{
    if ((x < h && y < w) && (x >= 0 && y >= 0)){
        if(graph[x][y] == '.' && !vis[x][y])
            return true;
    }

    return false;
}

void dfs(int x, int y)
{
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
    int x, y;
    cin>>w>>h;

    cnt = 0;
    for (int i = 0; i < h; i++){
        for (int j = 0; j < w; j++){
            cin>>graph[i][j];
            vis[i][j] = 0;

            if (graph[i][j] == '@')
                x = i, y = j;
        }
    }

    dfs(x, y);

    cout<<cnt;
}

int main()
{
    Shah_Sayem

    int tc = 1;
    cin>>tc;
    for (int i = 1; i <= tc; i++){
        cout<<"Case "<<i<<": ";
        solve();
        cout<<"\n";
    }

    return 0;
}
