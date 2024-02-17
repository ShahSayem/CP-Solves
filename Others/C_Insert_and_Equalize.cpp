#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    ll n, GCD = 0;
    cin>>n;

    vector <int> v(n);
    vector <ll> vec;
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }
    sort(v.begin(), v.end());

    for (int i = 1; i < n; i++){
        GCD = __gcd(GCD, 1LL*(v[i]-v[i-1]));
    }

    if (n == 1){
        cout<<1;
        return;
    }

    ll check = 0, ans = 0, mx;
    for (int i = n-1; i > 0; i--){
        vec.push_back(v[i]);

        if (check)
            continue;

        if ((v[i]-GCD) > v[i-1]){
            check = 1;
            vec.push_back(v[i]-GCD);
        }
    }
    vec.push_back(v[0]);
    reverse(vec.begin(), vec.end());
    
    if (!check)
        vec.push_back(v[n-1]+GCD);

    mx = vec[n];
    for (int i = 0; i <= n; i++){
        ans += ((mx-vec[i])/GCD);
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
