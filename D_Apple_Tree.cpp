#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const int MAX = 200000+5;

///.........Graph.........///
vector <int> adj[MAX];
int val[MAX];
bool vis[MAX];

void dfs(int node)
{
    vis[node] = 1;
    for (auto child: adj[node]){
        if (!vis[child]){
            if (adj[child].size() == 1)
                val[child]++;

            dfs(child);

            val[node] += val[child];
        }
    }
}

void solve ()
{
    int n;
    cin>>n;

    int u, v;
    for (int i = 0; i < n-1; i++){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1);

    int q, x, y;
    ll ans;
    cin>>q;

    while (q--){
        cin>>x>>y;

        ans = (val[x]*1LL)*(val[y]*1LL);
        cout<<ans<<"\n";
    }

    for (int i = 1; i <= n; i++){
        val[i] = 0;
        vis[i] = 0;
        adj[i].clear();
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
