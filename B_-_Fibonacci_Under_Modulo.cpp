#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n;
    cin>>n;

    ll ans = 0, f = 0, s = 1, MOD = 998244353;
    for (int i = 2; i <= n; i++){
        ans = ((f%MOD)+(s%MOD))%MOD;
        f = s;
        s = ans;
    }
    cout<<s%MOD;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    cout<<"\n";

    return 0;
}