#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 20000+5;

 
///.........Graph.........///
vector <int> adj[MAX];
bool vis[MAX];
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};

ll vampire, lykan, ans;
bool nodeType[MAX];

ll bfs (int source)
{
    vampire = 0, lykan = 0, ans = 0;
    vis[source] = 1;
    queue <int> q;
    q.push(source);
    vampire++;
    nodeType[source] = 1;  // 1 -> vampire
                          //  0 -> lykan
    int node;
    while (!q.empty()){
        node = q.front();
        q.pop();

        for (int child:adj[node]){
            if (!vis[child]){
                vis[child] = 1;
                q.push(child);

                if (nodeType[node] == 1){
                    nodeType[child] = 0;
                    lykan++;
                }
                else {
                    nodeType[child] = 1;
                    vampire++;
                }
            }
        }  
    }

    ans = max(vampire, lykan);

    return ans;
}

void solve()
{
    for (int i = 0; i < MAX; ++i){
        adj[i].clear();
    }
    memset(vis, 0, sizeof(vis));
    memset(nodeType, 0, sizeof(nodeType)); 

    int n, u, v;
    cin>>n;

    for (int i = 0; i < n; ++i){
        cin>>u>>v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    ll sum = 0;
    for (int i = 0; i < MAX; ++i){
        if (!vis[i] && !adj[i].empty()){
            sum += bfs(i);
        }
    }

    cout<<sum;
}
 
int main()
{
    Shah_Sayem
    // #ifndef ONLINE_JUDGE
    //     freopen("Input.txt", "r", stdin);
    //     freopen("Output.txt", "w", stdout);
    //     freopen("Error.txt", "w", stderr);
    // #endif

    int tc = 1;
    cin>>tc;
    for (int i = 1; i <= tc; i++){
        cout<<"Case "<<i<<": ";
        solve();
        cout<<"\n";
    }
 
    return 0;
}