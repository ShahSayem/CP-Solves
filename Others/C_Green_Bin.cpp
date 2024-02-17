#include <bits/stdc++.h>
using namespace std;
#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;

void solve()
{
    int n;
    cin>>n;

    vector <string> v(n);
    map <string, ll> mp;
    for (int i = 0; i < n; i++){
        cin>>v[i];

        sort(v[i].begin(), v[i].end());
        mp[v[i]]++;
    }

    ll ans = 0, x;
    for (auto it : mp){
        x = it.second;
        ans += (x*(x-1)/2); 
    }
    
    cout<<ans;
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
