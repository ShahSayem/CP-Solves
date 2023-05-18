#include <bits/stdc++.h>
#define   ll   long long
using namespace std;

void solve(){
    vector <ll> v1;
    vector <ll> v2;

    ll x, n, m, cnt = 0;
    cin>>n>>m>>x;

    for (ll i = 0; i < n; i++){
        ll j; //buy
        cin>>j;
        v1.push_back(j);

        if (j >= x)
            cnt++;
    }

    for (ll i = 0; i < m; i++){
        ll j;   //sell
        cin>>j;
        v2.push_back(j);

        if (j <= x)
            cnt++;
    }

    cout<<cnt;
}
int main()
{
    // int t;
    // while(t--){
        solve();
    // }
    
    return 0;
}