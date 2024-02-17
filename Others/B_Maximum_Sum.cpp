#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;

void solve()
{
    int n, k;
    cin>>n>>k;
    
    vector <ll> v(n+1), pref(n+1);
    for (int i = 1; i <= n; i++){
        cin>>v[i];
    }
    sort(v.begin(), v.end());

    
    for (int i = 1; i <= n; i++){
        pref[i] = pref[i-1] + v[i];
    }
    
    int f, s;
    ll ans = 0;
    for (int i = 0; i <= k; i++){
        f = 2*i, s = n - (k-i);

        ans = max(ans, pref[s]-pref[f]);
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
