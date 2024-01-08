#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e5+5;

bool vis[MAX];

void solve()
{
    int n, cnt;
    cin>>n;

    ll sum = 0;
    memset(vis, 0, sizeof(vis));
    vector <int> v(n), ans;
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }
    sort(v.begin(), v.end());

    sum += v[0];
    ans.push_back(v[0]);
    for (int i = 1; i < n; i++){
        if (v[i] > sum){
            sum+=v[i];
            ans.push_back(v[i]);
            vis[i] = 1;
        }
    }

    cnt = n-ans.size();
    for (int i = 1; i < n; i++){
        if (!vis[i])
            ans.push_back(v[i]);
    }

    cout<<cnt<<"\n";
    for (int i = 0; i < n; i++){
        cout<<ans[i]<<" ";
    }
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
