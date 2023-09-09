#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
//typedef __int128 lll; //cpp20
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
    int n, lcm, gcd, x;
    cin>>n;

    vector <int> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }


    lcm = v[0];
    for (int i = 1; i < n; i++){

        gcd = __gcd(lcm, v[i]);
        x = (lcm%MOD) * (v[i]%MOD);
        lcm = (x*getExp(gcd, MOD-2))%MOD;
    }

    //cout<<lcm;

    ll sum = 0;
    for (int i = 0; i < n; i++){
        sum = (sum%MOD + ((lcm/v[i])%MOD))%MOD;
    }
    
    cout<<sum;
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
