#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const int MAX = 3e4+5;
int mxDis, mxNode;

///.........Graph.........///
             //v    w
vector <int> adj[MAX];
bool vis[MAX];

void dfs(int node, int dist)
{
    vis[node] = 1;
    if (dist > mxDis){
        mxDis = dist;
        mxNode = node;
    }
    
    for (auto child: adj[node]){
        if (!vis[child]){
            dfs(child, dist+1);
        }     
    }
}

void solve()
{
    for (int i = 0; i < MAX; i++){
        adj[i].clear();
    }
    
    memset(vis, 0, sizeof(vis));
    int n, u, v;
    cin>>n;
    for (int i = 1; i < n; i++){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    mxDis = -1;
    dfs(1, 0);

    mxDis = -1;
    memset(vis, 0, sizeof(vis));
    dfs(mxNode, 0);

    cout<<mxDis;
}

int main()
{
    Shah_Sayem

    int tc = 1;
    //cin>>tc;
    for (int i = 1; i <= tc; i++){
        solve();
        cout<<"\n";
    }

    return 0;
}
