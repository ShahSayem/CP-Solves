#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int n, m, mx = 0, mn = INT_MAX;
    cin>>n>>m;

    vector <int> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];

        mx = max(v[i], mx);
        mn = min(v[i], mn);
    }

    ll sum = 0;
    for (int i = 0; i < n; i++){
        sum += (mx-v[i]);
    }

    ll ans = max(ll(mx-mn), (sum+m-1)/m) ;
    cout<<ans;
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