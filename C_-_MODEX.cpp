#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int t){
    ll x, y, n;
    cin>>x>>y>>n;

    if (t == 1){
        int p;
        cin>>p;
    }

    ll ans = x, f = 0, s = 1, MOD = n;
    for (ll i = 1; i < y; i++){
        ans = ((ans%MOD)*(x%MOD))%MOD;
    }
    cout<<ans%MOD;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while (t--){
        solve(t);
    }

    cout<<"\n";

    return 0;
}