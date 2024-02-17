#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int n, m;
    cin>>n>>m;

    bool ans = 1;
    int grid[n][m];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin>>grid[i][j];

            if ((i == n-1 && j == m-1) || (i == 0 && (j == 0 || j == m-1)) || (i == n-1 && j == 0)){
                if (grid[i][j] <= 2)
                    grid[i][j] = 2;
                else 
                    ans = 0;
            }
            else if ((i == 0 || j == 0) || (i == n-1 || j == m-1)){
                if (grid[i][j] <= 3)
                    grid[i][j] = 3;
                else 
                    ans = 0;
            }
            else {
                if (grid[i][j] <= 4)
                    grid[i][j] = 4;
                else 
                    ans = 0;
            }
        }
    }


    if (!ans){
        cout<<"NO\n";
        return;
    }
    
    cout<<"YES\n";
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout<<grid[i][j]<<" ";
        }
        cout<<"\n";
    }
}

int main()
{
    Shah_Sayem

    int tc = 1;
    cin>>tc;
    while (tc--){
        solve();
    }

    return 0;
}
