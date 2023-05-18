#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

void solve()
{
    int n, m;
    cin>>n>>m;

    bool adj[n+5][n+5];
    for (int i = 0; i < n+5; i++){
        for (int j = 0; j < n+5; j++){
            adj[i][j] = false;
        }
    }

    int u, v, cnt = 0;
    for (int i = 0; i < m; i++){
        cin>>u>>v;

        u--, v--;
        adj[u][v] = true;
        adj[v][u] = true;
    }
    
    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            for (int k = j+1; k < n; k++){
                if (adj[i][j] && adj[j][k] && adj[k][i])
                    cnt++;
            }
        }
    }

    cout<<cnt;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // int t;
    // cin>>t;
    // while (t--){
        solve();
        cout<<"\n";
    // }

    return 0;
}
