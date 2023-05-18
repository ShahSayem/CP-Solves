#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const int MAX = 500000+5;

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
    int n, k, m, x, y;
    ll cnt = 1;
    cin>>n>>m;

    DisjointSet ds(n);

    vector <int> v(n+1);
    for (int i = 1; i <= n; i++){
        v[i] = 1;
    }

    for (int i = 1; i <= m; i++){
        cin>>k;
        if (k){
            cin>>x;
            k--;
        }

        while (k--){
            cin>>y;
            if (ds.findUltPar(x) != ds.findUltPar(y)){
                ds.unionBySize(x, y);
            }

            x = y;
        }
    }
    
    for (int i = 1; i <= n; i++){
        v[ds.findUltPar(i)]++;
        v[i]--;
    }

    for (int i = 1; i <= n; i++){
        cout<<v[ds.findUltPar(i)]<<" ";
    }

    return 0;
}
