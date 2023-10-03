#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 998244353;
const int MAX = 1e7+5;


void solve()
{
    int n, mn = INT_MAX;
    cin>>n;

    ll sum = 0;
    vector <int> v(n);
    for (size_t i = 0; i < n; i++){
        cin>>v[i];

        sum += v[i];
        mn = min(mn, v[i]);
    }
    
    cout<<sum-mn;
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
