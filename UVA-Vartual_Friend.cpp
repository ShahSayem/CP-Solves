#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;

class DisjointSet 
{
    vector <int> rank, parent, sz;
public:
    DisjointSet(int n){
        rank.resize(n+1, 0); //1 base indexing
        parent.resize(n+1);
        sz.resize(n+1);
        for (int i = 0; i <= n; i++){
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
            cout<<sz[ultParU]<<"\n";
            return; 
        }
        if (sz[ultParU] < sz[ultParV]){
            parent[ultParU] = ultParV;
            sz[ultParV] += sz[ultParU];

            cout<<sz[ultParV]<<"\n";
        }
        else {
            parent[ultParV] = ultParU;
            sz[ultParU] += sz[ultParV];

            cout<<sz[ultParU]<<"\n";
        }
    }
};

void solve()
{
    int n, num = 0;
    cin>>n;

    DisjointSet ds(n);
    string s1, s2;
    map <string, int> mp;
    for (int i = 0; i < n; i++){
        cin>>s1>>s2;

        if (mp.find(s1) == mp.end()){
            mp[s1] = num++;
        }
        if (mp.find(s2) == mp.end()){
            mp[s2] = num++;
        }
        ds.unionBySize(mp[s1], mp[s2]);
    }
}

int main()
{
    Shah_Sayem

    int t = 1;
    cin>>t;
    while (t--){
        solve();
    }

    return 0;
}
