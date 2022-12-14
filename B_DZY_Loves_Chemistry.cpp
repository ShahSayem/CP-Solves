#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 100;

vector <int> gr[MAX+5];
bool vis[MAX+5];

void dfs(int u, int &cnt)
{
    vis[u] == 1;
    ++cnt;

    for (auto v:gr[u]){
        if (!vis[v]){
            dfs(v, cnt);
        }
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin>>n>>m;

    int u, v;
    for (int i = 0; i < m; i++){
        cin>>u>>v;

        gr[u].push_back(v);
        gr[v].push_back(u);
    }
    
    int16_t ans = 1;
    for (int i = 1; i <= n; i++){
        if (vis[i] == 0){
            int cnt = 0;
            dfs(i, cnt);
            ans *= 1LL<<(cnt-1);
        }
    }
    
    cout<<ans<<"\n";

    return 0;
}
