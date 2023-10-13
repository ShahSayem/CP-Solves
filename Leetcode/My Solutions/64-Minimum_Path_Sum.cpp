#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;

ll dp[205][205];
vector < vector <int> > grid(205);

ll mnPathSum(int x, int y)
{
    if ((x == 0 && y == 0)){
        return grid[0][0];
    }

    if ((x < 0 || y < 0)){
        return INT_MAX;
    }

    if (dp[x][y] != -1)
        return dp[x][y];

    ll left = 0, up = 0;
    left = grid[x][y] + mnPathSum(x-1, y);
    up = grid[x][y] + mnPathSum(x, y-1);

    return dp[x][y] = min(left, up);
}

void solve()
{
    memset(dp, -1, sizeof(dp));
    for (int i = 0; i < 205; i++){
            grid[i].clear();
    }

    int m, n;
    cin>>m>>n;

    int z;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin>>z;
            grid[i].push_back(z);
        }
    }
    
    cout<<mnPathSum(m-1, n-1);
}

int main()
{
    Shah_Sayem

    int tc = 1;
    cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }

    return 0;
}
