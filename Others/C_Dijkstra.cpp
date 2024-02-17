#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MAX = 1e5+5;
vector < pair <int, ll> > adj[MAX];
vector <ll> distTo(MAX, LONG_LONG_MAX), parent(MAX);

void dijkstra(int n, int s)
{
    priority_queue < pair<ll, int>, vector <pair<ll, int>>, greater<pair<ll, int>> > pq;
    for (int i = 0; i < n; i++){
        parent[i] = i;
    }
    
    distTo[s] = 0;
    pq.push({0, s});

    int node;
    ll dis;
    while (!pq.empty()){
        node = pq.top().second;
        dis = pq.top().first;
        pq.pop();

        
        if(dis > distTo[node]){
            continue;
        }

        int v;
        ll w;
        for (auto it : adj[node]){
            v = it.first;
            w = it.second;

            if (dis+w < distTo[v]){
                distTo[v] = dis+w;
                pq.push({distTo[v], v});

                parent[v] = node;
            }
        }  
    }
}

int main()
{
    int n, m, u, v, weight;
    cin>>n>>m;

    for (int i = 0; i < m; i++){
        cin>>u>>v>>weight;

        u--, v--;
        adj[u].push_back({v, weight});
        adj[v].push_back({u, weight});
    }

    dijkstra(n, 0);
    
    if (parent[n-1] == n-1){
        cout<<-1;
        return 0;
    }

    vector <int> vec;
    int currNode = n-1;
    vec.push_back(currNode);
    while (parent[currNode] != currNode){
        currNode = parent[currNode];
        vec.push_back(currNode);
        // cout<<currNode<<" ";
    }
    
    int sz = vec.size();
    for (int i = sz-1; i >= 0; i--){
        cout<<vec[i]+1<<" ";
    }
     
    return 0;
}
