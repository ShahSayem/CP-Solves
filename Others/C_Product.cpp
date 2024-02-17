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
vector <int> adj[MAX];
bool vis[MAX];

void dfs(int node, ll mul)
{
    vis[node] = 1;
    for (auto child: adj[node]){
        if (!vis[child])
            dfs(child);
    }
}

void solve()
{
    ll n, x, l, a;
    cin>>n>>x;

    for (int i = 0; i < n; i++){
        if (i == 0){
            cin>>l;
            continue;
        }

        for (int j = 0; j < l; j++){
            cin>>a;
            adj[i].push_back(a);
        }
    }
    
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
