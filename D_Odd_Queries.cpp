#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;

const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 200000+5;

void solve()
{
    int n, q;
    cin>>n>>q;
    vector <int> v(n), pre(n, 0);
    ll sum = 0, x, y, z;
    for (int i = 0; i < n; i++){
        cin>>v[i];
        sum += v[i];

        if (i){
            pre[i] = v[i]+pre[i-1];
        }
    }

    int l, r, k, ans;
    while (q--){
        cin>>l>>r>>k;
        l--, r--;

        x = v[l] + (pre[r] - pre[l]);
        y = sum - x + (k * (r-l+1));

        if (y%2)
            cout<<"YES\n";
        else 
            cout<<"NO\n";
    }
}

int main()
{
    Shah_Sayem

    int t = 1;
    cin>>t;
    while (t--){
        solve();
    }

    return 0;
}
