#include <iostream>
#include <vector>

using namespace std;

vector<vector<pair<int, int>>> graph;
vector<bool> visited;

pair<int, int> dfs(int node, int distance) {
    visited[node] = true;
    pair<int, int> farthest_node = make_pair(node, distance);

    for (pair<int, int> neighbor : graph[node]) {
        int neighbor_node = neighbor.first;
        int weight = neighbor.second;
        if (!visited[neighbor_node]) {
            int new_distance = distance + weight;
            pair<int, int> new_node = dfs(neighbor_node, new_distance);

            if (new_node.second > farthest_node.second) {
                farthest_node = new_node;
            }
        }
    }

    return farthest_node;
}


void solve() {
    int n; 
    cin >> n;

    graph.clear(), visited.clear();
    graph.resize(n + 1);

    for (int i = 0; i < n - 1; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        graph[u].push_back(make_pair(v, w));
        graph[v].push_back(make_pair(u, w));
    }

    visited.resize(n + 1, false);

    int start_node = 0;
    pair<int, int> farthest_node = dfs(start_node, 0);

    visited.clear();
    visited.resize(n + 1, false);
    farthest_node = dfs(farthest_node.first, 0);

    cout <<farthest_node.second;
}

int main()
{
    int tc = 1;
    cin>>tc;
    for (int i = 1; i <= tc; i++){
        cout<<"Case "<<i<<": ";
        solve();
        cout<<"\n";
    }

    return 0;
}