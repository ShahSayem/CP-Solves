#include <bits/stdc++.h>
using namespace std;
 
#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e5+5;
 
///.........Graph.........///
vector <int> graph[MAX], revGraph[MAX];
int vis[MAX];
stack <int> stk;
int numberOfComp = 0;

void dfs(int node)
{
    vis[node] = 1;
    for (auto child: graph[node]){
        if (!vis[child])
            dfs(child);
    }

    stk.push(node);
}

void dfs2(int node)
{
    vis[node] = 1;
    for (auto child: graph[node]){
        if (!vis[child])
            dfs2(child);
    }
}


void solve()
{    
    memset(vis, 0, sizeof(vis));
    for (int i = 0; i < MAX; ++i){
        graph[i].clear();
        revGraph[i].clear();
    }

    int n, m, u, v;
    cin>>n>>m;
    for (int i = 1; i <= m; ++i){
        cin>>u>>v;

        graph[u].push_back(v);
    }

    for (int i = 1; i <= n; i++){
        if(!vis[i]){
            dfs(i);
        }
    }

    memset(vis, 0, sizeof(vis));
    int x;
    numberOfComp = 0;
    while (!stk.empty()){
        x = stk.top();
        stk.pop();

        if (!vis[x]){
            numberOfComp++;
            dfs2(x);
        }
    }

    cout<<numberOfComp;
}
 
int main()
{
    Shah_Sayem
    #ifndef ONLINE_JUDGE
        freopen("Input.txt", "r", stdin);
        freopen("Output.txt", "w", stdout);
        freopen("Error.txt", "w", stderr);
    #endif

    int tc;
    cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }
 
    return 0;
}