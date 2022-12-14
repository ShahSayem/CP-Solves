#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

///.........Graph.........///
vector <int> adj[1000+5];
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};

void bfs (int n, int source)
{
    bool vis[n+1] = {0};
    vis[source] = 1;
    queue <int> q;
    q.push(source);
    
    int node;
    vector <int> cost(n+1, -1);
    cost[source] = 0;

    while (!q.empty()){
        node = q.front();
        q.pop();

        for (int child:adj[node]){
            if (!vis[child]){
                vis[child] = 1;
                cost[child] = cost[node] + 1;
                q.push(child);
            }
        }  
    }

    for (int i = 1; i <= n; i++){
        if (i == source){
            continue;
        }
        if (cost[i] >= 0)
            cout<<cost[i]*6<<" ";
        else 
            cout<<cost[i]<<" ";
    }
}

void solve()
{
    int n, m, s;
    cin>>n>>m;

    int u, v;
    for (int i = 0; i < m; i++){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    cin>>s;

    bfs(n, s);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while (t--){
        memset(adj,0,sizeof(adj));
        solve();
        cout<<"\n";
    }

    return 0;
}
