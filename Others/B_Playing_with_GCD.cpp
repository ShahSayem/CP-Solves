#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;

ll lcm(ll x, ll y)
{
    ll gcd = __gcd(x, y);
    return ((x*y) / gcd);
}

void solve()
{
    int n;
    cin>>n;

    vector <int> v(n), vec(n+1);
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }
    
    vec[0] = v[0], vec[n] = v[n-1];
    for (int i = 1; i < n; i++){
        vec[i] = lcm(v[i-1], v[i]);
    }

    int gcd;
    for (int i = 1; i <= n; i++){
        gcd = __gcd(vec[i-1], vec[i]);

        if (gcd != v[i-1]){
            cout<<"NO";
            return;
        }
    }

    cout<<"YES";
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
