#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

///.........Graph.........///
vector <int> adj[10000+5];
// vector <int> travers;
bool vis[10000+5] = {0};
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};


void dfs(int node)
{
    vis[node] = 1;
    // travers.push_back(node);
    for (auto child: adj[node]){
        if (!vis[child]){
            dfs(child);
        }
    }
}

void solve()
{
    int u, v, n, m;
    cin>>n>>m;
    while (cin>>u>>v){
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(u);

    // if (travers.size() == n)
    //     cout<<"YES";
    // else 
    //     cout<<"NO";

    for (int i = 1; i <= n; i++){
        if (!vis[i]){
            cout<<"NO";
            return;
        }
    }
    cout<<"YES";
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
