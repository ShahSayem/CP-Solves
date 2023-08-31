#include <bits/stdc++.h>
using namespace std;
 
#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 2000+5;
 
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
    //comp[numberOfComp].push_back(node);

    for (auto child: revGraph[node]){
        if (!vis[child])
            dfs2(child);
    }
}


void solve(int n, int m)
{    
    memset(vis, 0, sizeof(vis));
    for (int i = 0; i < MAX; ++i){
        graph[i].clear();
        revGraph[i].clear();
    }
            //ways
    int v, w, p;
    for (int i = 1; i <= m; ++i){
        cin>>v>>w>>p;

        if (p == 2){
            graph[v].push_back(w);
            graph[w].push_back(v);

            revGraph[v].push_back(w);
            revGraph[w].push_back(v);
        }
        else {
            graph[v].push_back(w);
            revGraph[w].push_back(v);
        }
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
            //cout<<x<<" ";
            numberOfComp++;

            dfs2(x);
        }
    }
    //cout<<"\n";
    if (numberOfComp == 1)
        cout<<1;
    else 
        cout<<0;
}
 
int main()
{
    Shah_Sayem
    #ifndef ONLINE_JUDGE
        freopen("Input.txt", "r", stdin);
        freopen("Output.txt", "w", stdout);
        freopen("Error.txt", "w", stderr);
    #endif

    int n, m;
    while (cin>>n>>m && (n && m)){
        solve(n, m);
        cout<<"\n";
    }
 
    return 0;
}