#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 10000000+5;


void solve()
{
    int n;
    cin>>n;

    vector <string> v(n);
    map <string, int> mp;
    for (int i = 0; i < n; i++){
        cin>>v[i];

        mp[v[i]]++;
    }
    
    ll ans = mp["O"] + max(mp["A"], mp["B"]);
    if (mp["A"] || mp["B"]){
        ans += mp["AB"];
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
