#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;

//int dp[MAX];
//int arr[MAX];
//int tree[4*MAX+1];

///.........Graph.........///
//vector <int> adj[MAX];

void solve()
{
    ll h, w;
    cin>>h>>w;

    char grid[h][w];

    for (int i = 0; i < h; i++){
        for (int j = 0; j < w; j++){
            cin>>grid[i][j];
        }
    }

    for (int i = 0; i < h; i++){
        for (int j = 0; j < w; j++){
            if (grid[i][j] == '#'){
                if ((i && (grid[i-1][j] == '#')) || ((i < h-1) && (grid[i+1][j] == '#')) || (j && (grid[i][j-1] == '#')) || ((j < w-1) && (grid[i][j+1] == '#'))){
                    continue;
                }
                else {
                    cout<<"No";
                    return;
                }
            }
        }
    }

    cout<<"Yes";
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
