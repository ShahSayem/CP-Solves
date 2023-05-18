#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const int MAX = 100000+5;

map <int, int> ans;

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

        ans[ultParU] = v;
    }
};

int main()
{
    Shah_Sayem

    int n, num = 1;
    cin>>n;

    DisjointSet ds(n);
    string s1, s2;
    map <string, int> mp;
    map <int, string> mp2;
    for (int i = 0; i < n; i++){
        cin>>s1>>s2;

        if (mp.find(s1) == mp.end()){
            mp[s1] = num++;

            mp2[mp[s1]] = s1;
        }
        if (mp.find(s2) == mp.end()){
            mp[s2] = num++;

            mp2[mp[s2]] = s2;
        }
        ds.unionBySize(mp[s1], mp[s2]);
    }

    int x = ans.size();
    cout<<x<<"\n";

    for (auto &i : ans){
        //cout<<i.first<<" "<<i.second<<"\n";
        cout<<mp2[i.first]<<" "<<mp2[i.second]<<"\n";
    }
    
    return 0;
}

