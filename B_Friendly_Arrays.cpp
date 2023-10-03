#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    ll n, m, mx = 0, mn = INT_MAX;
    cin>>n>>m;

    vector <ll> a(n), b(m);
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }
    for (int i = 0; i < m; i++){
        cin>>b[i];

        mx = max(b[i], mx);
    }

    for (int i = 0; i < n; i++){
        mx |= a[i];
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
