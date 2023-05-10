#include <bits/stdc++.h>
using namespace std;

//By Errichto
#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
const int MAX = 1000005;
const int LOG = 17;
vector <int> children[MAX];
int parent[MAX][LOG];
int depth[MAX];

void dfs(int a, int p)
{
    depth[a] = depth[p]+1;
    parent[a][0] = p;
    for(int i = 1; i < LOG; i++){
        parent[a][i] = parent[ parent[a][i-1] ][i-1];
    }

    for (int b: children[a]){
        if (b != p)
            dfs(b, a);
    }
}

int getLCA(int a, int b) //O(log(N))
{
    if (depth[a] < depth[b]){
        swap(a, b);
    }

    int d = depth[a] - depth[b];
    for(int i = LOG-1; i >= 0 ; i--){
        if (depth[parent[a][i]] >= depth[b])
            a = parent[a][i];
    }
    
    if (a == b)
        return a;

    for(int i = LOG-1; i >= 0 ; i--){
        if (parent[a][i] != parent[b][i]){
            a = parent[a][i];
            b = parent[b][i];
        }
    }

    return parent[a][0];   //Here, parent[a][0] = parent[b][0]
}

int main()
{
    Shah_Sayem

    int n, m, v;
    cin>>n;
    for (int i = 0; i < n; i++){
        cin>>m;
        while (m--){
            cin>>v;
            children[i].push_back(v);
            children[v].push_back(i);
        } 
    }
    dfs(0, -1);

    int q, a, b;
    cin>>q;
    while (q--){
        cin>>a>>b;

        cout<<getLCA(a, b)<<"\n";
    }
    
    return 0;
}
