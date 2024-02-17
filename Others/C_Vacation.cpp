#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e5+5;

ll dp[MAX][4];
vector < vector <int> > v;
// last -> 0, 1, 2, 3(none picked)

ll mxTotalPoint(int curr, int last)
{
    if (curr == 0){
        ll mx = 0;
        for (int i = 0; i < 3; i++){
            if (i != last){
                mx = max(ll(v[0][i]), mx);
            }
        }
        
        return mx;
    }

    if (dp[curr][last] != -1){
        return dp[curr][last];
    }

    ll mx = 0, point = 0;
    for (int i = 0; i < 3; i++){
        if (i != last){
            point = v[curr][i] + mxTotalPoint(curr-1, i);
            mx = max(point, mx);
        }
    }

    return dp[curr][last] = mx;
}

void solve()
{
    int n;
    cin>>n;

    memset(dp, -1, sizeof(dp));
    v.resize(n);
    int a, b, c;
    for (int i = 0; i < n; i++){
        cin>>a>>b>>c;
        v[i] = {a, b, c};
    }
    
    ll ans = mxTotalPoint(n-1, 3);
    cout<<ans;
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
