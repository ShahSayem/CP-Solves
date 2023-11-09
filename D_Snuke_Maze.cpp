#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 500+5;

char grid[MAX][MAX];
bool vis[MAX][MAX];
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};
int h, w;
string target = "snuke"; //.....5

bool canReach(int x, int y, int pos)
{
    if ((x < h && y < w) && (x >= 0 && y >= 0) && !vis[x][y] && target[pos] == grid[x][y]){
        return true;
    }

    return false;
}

void dfs(int x, int y, int pos)
{
    vis[x][y] = 1;
    int xx, yy;
    for (int i = 0; i < 4; i++){
        xx = x+X[i];
        yy = y+Y[i];

        if (canReach(xx, yy, (pos+1)%5))
            dfs(xx, yy, (pos+1)%5);
    }    
}

void solve()
{
    cin>>h>>w;

    for (int i = 0; i < h; i++){
        for (int j = 0; j < w; j++){
            cin>>grid[i][j];
        }
    }
    
    dfs(0, 0, 0);

    if (vis[h-1][w-1])
        cout<<"Yes";
    else 
        cout<<"No";
}

int main()
{
    Shah_Sayem

    int tc = 1;
    //cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }

    return 0;
}
