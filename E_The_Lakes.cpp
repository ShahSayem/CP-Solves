#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
const int MAX = 1000+5;

///.........Graph.........///
int n, m, ansCurr;
int arr[MAX][MAX];
bool vis[MAX][MAX];

void dfs(int x, int y)
{
    if (!arr[x][y] || vis[x][y])
        return;

    ansCurr += arr[x][y];
    vis[x][y] = 1;

    if (x+1 < n)
        dfs(x+1, y);
    if (y+1 < m)
        dfs(x, y+1);
    if (x > 0)
        dfs(x-1, y);
    if (y > 0)
        dfs(x, y-1);
}

void solve()
{
    cin>>n>>m;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin>>arr[i][j];
        }
    }
    int ans = 0;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            ansCurr = 0;
            dfs(i, j);
            ans = max(ans, ansCurr);
        }
    }
    
    cout<<ans;
}

int main()
{
    Shah_Sayem

    int tc = 1;
    cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";

        memset(arr, 0, sizeof(arr));
        memset(vis, 0, sizeof(vis));
    }

    return 0;
}