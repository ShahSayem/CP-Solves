#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;

ll getExp(ll a, ll b)
{
    if (b == 0)
        return 1;
    if (b%2 == 0){
        auto x = getExp(a, b/2)%MOD;
        return (x*x)%MOD;
    }
    return (a * getExp(a, b-1))%MOD;
}  

void solve()
{
    ll n;
    cin>>n;

    ll withAllDigit = getExp(10, n);
    ll withOut0 = getExp(9, n);
    ll withOut9 = getExp(9, n);
    ll withOut0And9 = getExp(8, n);

    ll ans = (withAllDigit - ((withOut0 + withOut9)%MOD) + withOut0And9 + MOD) % MOD;
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
