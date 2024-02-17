#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

///.........Graph.........///
vector <int> adj[100000+5];
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};

void bfs (int n, int source, int dest)
{
    bool vis[n+1] = {0};
    vector <int> dist(n+1, 0);
    vis[source] = 1;
    queue <int> q;
    q.push(source);
    
    int node;

    while (!q.empty()){
        node = q.front();
        q.pop();

        for (int child:adj[node]){
            if (!vis[child]){
                vis[child] = 1;
                dist[child] = dist[node]+1;
                q.push(child);
            }
        }  
    }

    if (dist[dest] == 0){
        cout<<-1;
        return;
    }

    cout<<dist[dest]<<"\n";
    vector <int> path;
    int y = dest;
    while (y != source){
        path.push_back(y);
        for (int x:adj[y]){
            if(dist[x] == dist[y]-1){
                y = x;
                break;
            }
        }
    }
    path.push_back(source);

    reverse(path.begin(), path.end());
    for(auto z:path)
        cout<<z<<" ";
}

void solve()
{
    int n, m, a, b;
    cin>>n>>m;
    cin>>a>>b;

    int u, v;
    for (int i = 0; i < m; i++){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    bfs(n, a, b);
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
