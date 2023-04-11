#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;

const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000+5;

struct FS
{
    bool one, two;
};

vector <int> adj[MAX];
const int LOG = 14;
int up[MAX][LOG];
int depth[MAX];
vector <FS> vis(MAX);
int ans = -1;
void dfs1(int node)
{
    if (vis[node].two){
        ans = node;
        return;
    }

    vis[node].one = 1;
    for (auto child: adj[node]){
        if (!vis[child].one)
            dfs1(child);
    }
}

void dfs2(int node)
{
    if (vis[node].one){
        ans = node;
        return;
    }
    vis[node].two = 1;
    for (auto child: adj[node]){
        if (!vis[child].two)
            dfs2(child);
    }
}

int getLCA(int a, int b)
{
    if (depth[a] < depth[b]){
        swap(a, b);
    }

    while (depth[a] > depth[b]){
        a = up[a][0];
    }

    while (a != b){
        a = up[a][0];
        b = up[b][0];
    }
    
    dfs1(a);
    dfs2(b);
}
void solve()
{
    int n;
    cin>>n;
    for (int i = 0; i < n; i++){
        
    }
    
}

int main()
{
    Shah_Sayem

    int t = 1;
    //cin>>t;
    while (t--){
        solve();
        cout<<"\n";
    }

    return 0;
}
