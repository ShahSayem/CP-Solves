#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;

ll lcm(ll x, ll y)
{
    return (x*y) / (__gcd(x, y));
}

void solve()
{
    ll x, y, k, ans;
    cin>>x>>y>>k;

    if (k & 1 == 0){
        ans = (__gcd(x, y)) * 2;
    }

    for (int i = 0; i < k; i++){
        if (x > y){
            swap(x, y);
        }

        if (i & 1){
            y = (x*y) / (__gcd(x, y)); //lcm
        }
        else {
            y = __gcd(x, y);
        }

        if (x == y){
            ans = x+y;
            break;;
        }
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
