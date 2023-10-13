#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int n, k, x;
    cin>>n>>k;

    map <int, int> mp;
    for (size_t i = 0; i < n; i++){
        cin>>x;
        mp[x]++;
    }
    
    ll sum = 0, ans = 0;
    vector <int> v;
    for (auto it : mp){
        v.push_back(it.second);
        sum += it.second;
    }

    sort(v.rbegin(), v.rend());
    for (size_t i = 0; i < v.size(); i++){
        if (i >= k)
            ans += v[i];

        //cout<<v[i]<<" ";
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
