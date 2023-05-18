#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
const int MAX = 200000+5;
int currentWater[MAX];

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

        parent[ultParU] = ultParV;
        sz[ultParV] += sz[ultParU];
    }
};

int main()
{
    Shah_Sayem
    int n;
    cin>>n;

    DisjointSet ds(n);

    vector <int> capacity(n+1);
    for (int i = 1; i <= n; i++){
        cin>>capacity[i];
    }
    
    int q, type, p, k, add;
    cin>>q;
    while (q--){
        cin>>type;

        if (type == 1){
            cin>>p>>k;

            p = ds.findUltPar(p);
            while (p <= n && k > 0){
                add = min(k, capacity[p]-currentWater[p]);
                currentWater[p] += add;
                k-= add;

                if(currentWater[p] == capacity[p]){
                    ds.unionBySize(p, p+1);
                    p = ds.findUltPar(p);
                }
            } 
        }
        else {
            cin>>k;
            cout<<currentWater[k]<<"\n";
        }
    }

    return 0;
}
