#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    ll n, k;
    cin>>n>>k;

    if (k == 1)
        cout<<n;
    else {
        ll hihgest2sPow = (1LL<<(int(log2l(n))));
        ll ans = hihgest2sPow ^ (hihgest2sPow-1);

        cout<<ans; 
    }
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
