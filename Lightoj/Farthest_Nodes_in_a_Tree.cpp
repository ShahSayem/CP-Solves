#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const int MAX = 3e4+5;
int cnt;
vector <int> dist;
///.........Graph.........///
             //v    w
vector < pair<int, int> > adj[MAX];
bool vis[MAX];

void dfs(int node)
{
    vis[node] = 1;
    for (auto child: adj[node]){
        if (!vis[child.first]){
            cnt += child.second;
            cout<<cnt<<" ";
            dfs(child.first);
        }    

        dist.push_back(cnt);
        cnt = 0;
    }
}

void solve()
{
    cnt = 0;
    dist.clear();
    memset(vis, 0, sizeof(vis));
    int n, u, v, w;
    cin>>n;
    for (int i = 1; i < n; i++){
        cin>>u>>v>>w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }

    dfs(0);

    sort(dist.rbegin(), dist.rend());

    cout<<"\n";
    if (dist.size() == 1){
        cout<<dist[0];
    }
    else {
        cout<<dist[0]+dist[1];
    }
}

int main()
{
    Shah_Sayem

    int tc = 1;
    cin>>tc;
    for (int i = 1; i <= tc; i++){
        cout<<"Case "<<i<<": ";
        solve();
        cout<<"\n";
    }

    return 0;
}
