#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int n, m, k, x;
    cin>>n>>m>>k;

    map <int, int> mp;
    vector <int> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];
        mp[v[i]] = i;
    }
    
    ll target, ans = 0;
    int idx1, idx2, val1, val2;
    for (int i = 0; i < m; i++){
        cin>>target;

        ans += (mp[target] / k) + 1;

        int idx = mp[target];
        if (idx){
            swap(v[idx], v[idx-1]);
            mp[v[idx]] = idx;
            mp[v[idx-1]] = idx-1;
        }
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
