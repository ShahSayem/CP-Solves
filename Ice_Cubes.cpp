#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;

int n, m, k, b;
ll dp[1005][1005][25];
vector < vector <int> > grid(1005);

ll mxPathSumLessK(int x, int y, int cnt)
{
    if ((x == 0 && y == 0)){
        return grid[0][0];
    }

    if ((x < 0 || y < 0) || cnt >= k){
        return -1e9;
    }

    if (dp[x][y][cnt] != -1)
        return dp[x][y][cnt];

    ll left = 0, up = 0;
    if (grid[x][y] < b){
        left = grid[x][y] + mxPathSumLessK(x-1, y, cnt+1);
        up = grid[x][y] + mxPathSumLessK(x, y-1, cnt+1);
    }
    else {
        left = grid[x][y] + mxPathSumLessK(x-1, y, cnt);
        up = grid[x][y] + mxPathSumLessK(x, y-1, cnt);
    }

    return dp[x][y][cnt] = max(left, up);
}

void solve()
{
    memset(dp, -1, sizeof(dp));
    for (int i = 0; i < 1005; i++){
            grid[i].clear();
    }

    cin>>n>>m>>k>>b;

    int z;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin>>z;
            grid[i].push_back(z);
        }
    }
    
    ll ans = mxPathSumLessK(n-1, m-1, 0);

    if (ans < 0){
        cout<<"IMPOSSIBLE";
    }
    else {
        cout<<ans;
    }
}

int main()
{
    Shah_Sayem

    int tc = 1, ca = 0;
    cin>>tc;
    while (tc--){
        ca++;
        cout<<"Case "<<ca<<": ";
        solve();
        cout<<"\n";
    }

    return 0;
}
