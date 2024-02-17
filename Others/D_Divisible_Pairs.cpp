#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int n, x, y;
    cin>>n>>x>>y;

    vector <int> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }
    
    ll ans = 0;
    int xx, yy, currX;
    map < pair <int, int>, int > mp;
    for (auto &&i : v){
        xx = i % x;
        yy = i % y;

        currX = (x - xx)%x;
        ans += mp[{currX, yy}];
        mp[{xx, yy}]++;
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
