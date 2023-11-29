#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int n;
    cin>>n;

    vector <int> v(n);
    map <int, int> mp;
    for (int i = 0; i < n; i++){
        cin>>v[i];

        mp[v[i]]++;
    }

    ll ans = 0;
    for (auto it : v){
        if (it == 1)
            ans += mp[2];
        else if (it == 2)
            ans += mp[1];

        ans += mp[it]-1;
        --mp[it];
    }
    
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
