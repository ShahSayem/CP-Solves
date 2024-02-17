#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;

    vector <int> v(n+1), a;
    map <int, int> mp, cnt;
    for (int i = 1; i <= n; i++){
        cin>>v[i];
        mp[v[i]] = i;
    }
    
    for (int i = 1; i <= n; i++){
        a.push_back(abs(mp[v[i]] - mp[i]));
    }
    
    int ans = 0;
    for (int i = 0; i < n; i++){
        if (a[i])
            cnt[a[i]]++;
    }

    auto it = cnt.begin();
    ans = it->first;

    for (auto it : cnt){
        ans = __gcd(it.first, ans);
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
