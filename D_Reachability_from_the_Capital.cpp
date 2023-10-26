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
    comp[numberOfComp].push_back(node);

    for (auto child: revGraph[node]){
        if (!vis[child])
            dfs2(child);
    }
}

int main()  
{          
    int u, v, n, m, s, cnt = 0;
    cin>>n>>m>>s;

    memset(vis, 0, sizeof(vis));
    for (int i = 0; i < MAX; ++i){
        graph[i].clear();
        revGraph[i].clear();
    }
    
    for (int i = 1; i <= m; i++){
        cin>>u>>v;

        graph[u].push_back(v);
        revGraph[v].push_back(u);
    }
    
    dfs(s);
    for (int i = 1; i <= n; i++){
        if (!vis[i])
            cnt++;
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
    
    // for (int i = 1; i <=numberOfComp; i++){
    //     cout<<"Comp no "<<i<<": ";
    //     for (int z: comp[i]){
    //         cout<<z<<" ";
    //     }
    //     cout<<"\n";
    // }

    //cout<<cnt<<" "<<numberOfComp-1;
    cout<<min(cnt, numberOfComp-1);
}
