#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
const int MAX = 1000+5;

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
    int n, a, b, cnt = 0;
    cin>>n;

    DisjointSet ds(n);

    vector <two> v(n+1), cycle(n+1, {0, 0});
    vector <int> comp;
    for (int i = 0; i < (n-1); i++){
        cin>>a>>b;

        if (ds.findUltPar(a) != ds.findUltPar(b)){
            ds.unionBySize(a, b);
        }
        else {
            cnt++;

            cycle[i].f = a;
            cycle[i].s = b;
        }
    }

    cout<<cnt<<"\n";
    for (int i = 0; i < n; i++){
        for (int j = 1; j <= n ; j++){
            if (cycle[i].f && (ds.findUltPar(cycle[i].f) != ds.findUltPar(j))){
                cout<<cycle[i].f<<" "<<cycle[i].s<<" "<<cycle[i].f<<" "<<j<<"\n";

                ds.unionBySize(ds.findUltPar(cycle[i].f), j);

                break;
            }
        }
    }

    return 0;
}