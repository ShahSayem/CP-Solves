#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 10000000+5;

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
    ll a, b, c;
    cin>>a>>b>>c;

    ll x = getExp(b, c);
    x = getExp(a, x);

    ll y = getExp(a, b);
    y = getExp(y, c);

    if (x == y){
        cout<<"What an excellent example!";
    }
    else {
        cout<<"Oh look, a squirrel!";
    }
}

int main()
{
    Shah_Sayem

    int tc = 1;
    // cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }

    return 0;
}
