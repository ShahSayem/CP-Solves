#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e5+5;

///.........Graph.........///
vector <int> adj[MAX];

void solve()
{
    int n, u, v;
    cin>>n;

    int cnt = 0;
    for (int i = 0; i <= n; i++){
        adj[i].clear();
    }
    
    for (int i = 0; i < n-1; i++){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    for (int i = 0; i <= n; i++){
        if (adj[i].size() == 1)
            cnt++;
    }
    
    cout<<(cnt+1)/2;
}

int main()
{
    Shah_Sayem

    int tc = 1;
    cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }

    return 0;
}
