#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const int MAX = 100000+5;
int cnt = 0;

class DisjointSet 
{
    vector <int> rank, parent, sz;
public:
    DisjointSet(int n){
        rank.resize(MAX+1, 0); //1 base indexing
        parent.resize(MAX+1);
        sz.resize(MAX+1);
        for (int i = 0; i <= MAX; i++){
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

        if (ultParU == ultParV){
            cnt++;

            return; 
        }
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

    int n, m;
    cin>>n>>m;

    if (n != m){
        cout<<"NO\n";
        return 0;
    }

    DisjointSet ds(n);
    int x, y;

    bool check[100];
    for (int i = 0; i < m; i++){
        cin>>x>>y;

        // check[x] = 1, check[y] = 1;
        ds.unionBySize(x, y);

        if (cnt > 1){
            cout<<"NO\n";
            return 0;
        }
    }

    for (int i = 0; i < m; i++){
        if (ds.findUltPar(x) != ds.findUltPar(y)){
            cout<<"NO\n";
            return 0;
        }
    }

    cout<<"FHTAGN!\n";
    
    return 0;
}

