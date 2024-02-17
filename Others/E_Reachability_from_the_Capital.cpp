#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 5e3+5;
//bool check[MAX];

///.........Graph.........///
vector <int> graph[MAX], revGraph[MAX], comp[MAX];
bool vis[MAX];
stack <int> stk;

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

int main()  
{          
    int u, v, n, m, s, cnt = 0;
    cin>>n>>m>>s;
    
    for (int i = 1; i <= m; i++){
        cin>>u>>v;

        graph[u].push_back(v);
        //revGraph[v].push_back(u);
    }
    
    for (int i = 1; i <= n; i++){
        if(!vis[i]){
            dfs(i);
        }
    }

    memset(vis, 0, sizeof(vis));
    int x;
    dfs2(s);
    while (!stk.empty()){
        x = stk.top();
        stk.pop();

        if (!vis[x]){
            cnt++;
            dfs2(x);
        }
    }
    
    cout<<cnt;

    return 0;
}
