#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int n, k, d, w;
    cin>>n>>k>>d>>w;

    ll validUntill, ans = 0, remain = 0;
    vector <int> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];

        if (!i || (validUntill < v[i]) || !remain){
            validUntill = v[i]+w+d;
            ans++;
            remain = k;
        }

        remain--;
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
