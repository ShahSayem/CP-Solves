#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    ll n;
    cin>>n;

    ll x = 1, left, ans, substract = 1;
    while ((x<<1LL) <= n){
        x = x<<1LL;
    }

    left = n-x;
    substract = left*2 + 1;
    
    ans = n-substract;
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
