#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const int MAX = 100+5;

class DisjointSet 
{
    vector <int> rank, parent, sz;
public:
    DisjointSet(){
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
    int n, m, a, b, c;
    cin>>n>>m;

    vector <DisjointSet> color(105);

    for (int i = 1; i <= m; i++){
        cin>>a>>b>>c;

        color[c].unionBySize(a, b);
    }
    
    int q, u, v, cnt;
    cin>>q;
    while (q--){
        cnt = 0;
        cin>>u>>v;

        for (int i = 1; i <= 100; i++){
            if (color[i].findUltPar(u) == color[i].findUltPar(v))
                cnt++;
        }

        cout<<cnt<<"\n";
    }

    return 0;
}
