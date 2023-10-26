#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 101;

int n, dp[MAX][MAX];
vector < vector <int> > v;

int mnFallPathSum(int x, int y)
{
    if (y < 0 || y >= n){
        return 1e9;
    }

    if (x == 0){
        return v[x][y];
    }

    if (dp[x][y] != INT_MAX)
        return dp[x][y];

    int up = 1e5, diagonalLeft = 1e5, diagonalRight = 1e5; 
    up = v[x][y] + mnFallPathSum(x-1, y);
    diagonalLeft = v[x][y] + mnFallPathSum(x-1, y-1);
    diagonalRight = v[x][y] + mnFallPathSum(x-1, y+1); 

    return dp[x][y] = min({up, diagonalLeft, diagonalRight});
}

void solve()
{
    cin>>n;

    for (int i = 0; i < MAX; i++){
        vector <int> temp(n);
        for (int j = 0; j < MAX; j++){
            dp[i][j] = INT_MAX;
        }
    }

    for (auto it : v){
        it.clear();
    }
    
    for (int i = 0; i < n; i++){
        vector <int> temp(n);
        for (int j = 0; j < n; j++){
            cin>>temp[j];
        }
        
        v.push_back(temp);
    }

    int ans = INT_MAX;
    for (int i = 0; i < n; i++){
        ans = min(ans, mnFallPathSum(n-1, i));
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
    }

    return 0;
}
