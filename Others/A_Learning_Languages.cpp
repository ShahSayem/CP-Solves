#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
const int MAX = 1000+5;

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
    }
};

int main()
{
    Shah_Sayem
    int n, m, cnt = 0, x;
    cin>>n>>m;

    DisjointSet ds(n);
    int NofLang[n];
    vector <int> langIndividual[100];
    for (int i = 0; i < n; i++){
        cin>>NofLang[i];

        if (NofLang[i] == 0)
            cnt++;

        for (int j = 0; j < NofLang[i]; j++){
            cin>>x;
            langIndividual[i].push_back(x);

            if (j)
                ds.unionBySize(langIndividual[i][j], langIndividual[i][j-1]);
        }
    }

    set <int> st;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < NofLang[i]; j++)
            st.insert(ds.findUltPar(langIndividual[i][j]));
    }
    
    if (!st.empty())
        cnt += st.size()-1;

    cout<<cnt<<"\n";

    return 0;
}

