#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5+5;
const int MOD = 1e9+7;
vector <int> graph[MAX], revGraph[MAX], comp[MAX];
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
    comp[numberOfComp].push_back(node);

    for (auto child: revGraph[node]){
        if (!vis[child])
            dfs2(child);
    }
}

int main()  //O(V+E)
{          //SSC = Kosaraju Algo

    int u, v, n, m;
    cin>>n;

    vector <int> cost(n);
    for (int i = 0; i < n; i++){
        cin>>cost[i];
    }
    
    cin>>m;    
    memset(vis, 0, sizeof(vis));
    for (int i = 0; i < m; i++){
        cin>>u>>v;

        graph[u].push_back(v);
        revGraph[v].push_back(u);
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
    
    vector <int> mn(n);
    int ans = 0;
    for (int i = 0; i < n; i++){
        mn[i] = INT_MAX;
    }
    
    for(auto it: comp){
        for (int i = 0; i < it.size(); i++){
            mn[i] = min(cost[it[i]], mn[i]);
        }
    }

    int way = 1, idx = 0;
    for(auto it: comp){
        x = 0;
        for (int i = 0; i < it.size(); i++){
            if(cost[it[i]] == mn[i])
                x++;
        }

        ans += mn[idx];
        way = (way*x)%MOD;

        idx++;
    }
    
    cout<<ans<<" "<<way;

    return 0;
}