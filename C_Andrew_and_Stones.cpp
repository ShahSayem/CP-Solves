#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int n, mx = 0;
    cin>>n;

    vector <int> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];

        if (i && i < n-1)
            mx = max(v[i], mx);
    }

    if ((mx == 1) || (n == 3 && (v[1] & 1))){
        cout<<-1;
        return;
    }

    ll ans = 0;
    for (int i = 1; i < n-1; i++){
        ans += (v[i]+1)/2;
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
