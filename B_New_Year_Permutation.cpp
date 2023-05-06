#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
const int MAX = 300+5;

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
    int n, x, cnt = 0;
    cin>>n;

    DisjointSet ds(n);

    vector <int> p(n+1);
    for (int i = 1; i <= n; i++){
        cin>>p[i];
    }

    string s;
    for (int i = 1; i <= n; i++){
        cin>>s;
        for (int j = 0; j < n; j++){
            if (s[j] == '1')
                ds.unionBySize(i, j+1);
        }
    }

    vector <int> v[n+1];
    for (int i = 1; i <= n; i++){
        x = ds.findUltPar(i);
        v[x].push_back(p[i]);
    }

    for (int i = 1; i <= n; i++){
        sort(v[i].begin(), v[i].end());
    }

    map <int, int> mp;
    for (int i = 1; i <= n; i++){
        x = ds.findUltPar(i);
        for (auto it : v[x]){
            if (!mp[it]){
                cout<<it<<" ";

                mp[it] = 1;
                break;
            }
        }
    }

    return 0;
}