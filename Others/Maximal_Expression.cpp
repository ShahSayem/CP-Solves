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

    ll ans1 = (n % k) / 2;
    ll ans2 = ((n % k) + k + 1) / 2;

    ll val1 = (ans1 % k) * ((n-ans1) % k);
    ll val2 = INT_MIN;

    if (ans2 < k)
        val2 = (ans2 % k) * ((n-ans2) % k);

    if (val1 > val2){
        cout<<ans1;
    }
    else {
        cout<<ans2;
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
