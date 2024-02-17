#include <bits/stdc++.h>
using namespace std;
 
#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 2e5+5;

int n, w;
vector <int> dams[MAX];
vector < pair <int, int> > water(MAX);
int ans = INT_MAX;

void dfs(int node, int mx, int need)
{
    mx = max(need, water[node].second);
    need = mx - water[node].first;
    ans = min(need, ans);

    for(auto it: dams[node]){
        dfs(it, mx, need);
    }
}

void solve()
{
    int d, c, u;
    cin>>n>>w;

    for (int i = 1; i <= n; i++){        
        cin>>d>>c>>u;
        dams[d].push_back(i);
        water[i] = {u, c};
    }

    dfs(0, w, w);
    cout<<min(ans, w);
}
 
int main()
{
    Shah_Sayem

    int tc = 1;
    //cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }
 
    return 0;
}