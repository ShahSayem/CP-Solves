#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
//typedef __int128 lll; //cpp20
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const ll MAX = 1e14+5;

void solve()
{
    ll l, r, d;
    cin>>l>>r>>d;

    if (d < l || d > r){
        cout<<d;
        return;
    }
    
    ll ans = ((r/d)+1)*d;
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
