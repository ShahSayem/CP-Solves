#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
const int MAX = 100000+5;
bool check[MAX];
struct two
{
    int f, s;
};

class DisjointSet 
{
    vector <int> rank, parent, sz;
public:
    DisjointSet(int n){
        rank.resize(MAX+1, 0); //1 base indexing
        parent.resize(MAX+1);
        sz.resize(MAX+1);
        for (int i = 0; i < MAX; i++){
            parent[i] = i;
            sz[i] = 1;
        } 
    }

    int findUltPar(int node){
        if (node == parent[node])
            return node;
        
        return parent[node] = findUltPar(parent[node]);
    }

    void unionByRank(int u, int v){     //union By Rank
        int ultParU = findUltPar(u);
        int ultParV = findUltPar(v);

        if (ultParU == ultParV)
            return;

        if (rank[ultParU] < rank[ultParV])
            parent[ultParU] = ultParV;
        else if (rank[ultParV] < rank[ultParU])
            parent[ultParV] = ultParU;
        else {
            parent[ultParU] = ultParV;
            rank[ultParU]++;
        }
    }

    void unionBySize(int u, int v){        //union By Size
        int ultParU = findUltPar(u);
        int ultParV = findUltPar(v);

        if (ultParU == ultParV)
            return; 

        if (sz[ultParU] < sz[ultParV]){
            parent[ultParU] = ultParV;
            sz[ultParV] += sz[ultParU];
        }
        else {
            parent[ultParV] = ultParU;
            sz[ultParU] += sz[ultParV];
        }
    }
};

int main()
{
    Shah_Sayem
    int n, m, x, y, cnt = 0;
    vector <int> cycle, comp;
    
    cin>>n>>m;
    DisjointSet ds(n);

    for (int i = 1; i <= m; i++){
        cin>>x>>y;

        if (ds.findUltPar(x) == ds.findUltPar(y))
            cycle.push_back(ds.findUltPar(x));
        else
            ds.unionBySize(x, y); 
    }

    for (auto it : cycle){
        check[ds.findUltPar(it)] = 1;
    }

    for (int i = 1; i <= n; i++){
        if (ds.findUltPar(i) == i)
            comp.push_back(i);
    }

    for (auto it : comp){
        if (!check[it])
            cnt++;
    }

    cout<<cnt<<"\n";

    return 0;
}