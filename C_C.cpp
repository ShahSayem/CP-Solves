#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;

void solve()
{
    int n, k;
    cin>>n>>k; 

    ll mx = -1e18;
    vector <ll> v(n), odd(n), even(n);
    for (size_t i = 0; i < n; i++){
        cin>>v[i];

        mx = max(v[i], mx);
    }

    for (size_t i = 0; i < n; i++){
        odd[i] = mx - v[i];
    }
    
    mx = -1e18;
    for (size_t i = 0; i < n; i++){
        mx = max(odd[i], mx);
    }

    for (size_t i = 0; i < n; i++){
        even[i] = mx - odd[i];
    }

    if (k == 0){
        for (auto &&i : v)
            cout<<i<<" ";
    }
    else if (k & 1){
        for (auto &&i : odd)
            cout<<i<<" ";
    }
    else {
        for (auto &&i : even)
            cout<<i<<" ";
    }
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
