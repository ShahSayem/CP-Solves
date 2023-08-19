#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
//typedef __int128 lll; //cpp20
const ll MOD = 1e9+7;
const int MAX = 1e5+5;
bool vis[MOD];

void solve()
{
    int n, m, d, init = 1, ans = INT_MAX, cnt;
    cin>>n>>m>>d;

    memset(vis, 0, sizeof(vis));
    vector <int> v(m);
    for (int i = 0; i < m; i++){
        cin>>v[i];
        cout<<"1ok\n";
        vis[v[i]] = 1;
        cout<<"1ok\n";
    }

    if (v[0] == 1){
        init = 0;
    }
    for (int i = 0; i < m; i++){
        cnt = init;
        cnt += m;

        cout<<"1ok\n";
        for (int j = 1; j <= m; j+=d){
            if (vis[v[j]]){
                cnt--;
            }
            cout<<"2ok\n";
        }
        
        ans = min(cnt, ans);
    }
    
    cout<<ans;
}

int main()
{
    //Shah_Sayem

    int tc = 1;
    cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }

    return 0;
}
