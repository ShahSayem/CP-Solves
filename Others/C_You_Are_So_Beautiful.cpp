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
    
    set <int> first, last, st;
    map <int, int> mp;
    vector <int> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];

        if (st.count(v[i]) == 0)
            first.insert(i);
        
        st.insert(v[i]);
        mp[v[i]] = i;
    }

    for (auto it : mp){
        last.insert(it.second);
    }
    
    ll ans = 0, cnt = 0;
    for (int i = n-1; i >= 0; i--){
        if (last.count(i))
            cnt++;
        
        if (first.count(i))
            ans += cnt;
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
