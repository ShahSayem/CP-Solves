#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;

void solve()
{
    int n, m, x, mn = INT_MAX, mn2 = INT_MAX;
    cin>>n;

    vector < vector <int> > v(n);
    ll ans = 0;
    for (int i = 0; i < n; i++){
        cin>>m;
        for (int j = 0; j < m; j++){
            cin>>x;
            v[i].push_back(x);
        }
        sort(v[i].begin(), v[i].end());

        ans += v[i][1];
        mn = min(v[i][0], mn);
        mn2 = min(v[i][1], mn2);
    }

    ans += mn;
    ans -= mn2;

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
