#include <bits/stdc++.h>
#define ll long long
using namespace std;

#define pi = 3.14159265358979323846
#define MOD = 1e9+7

void solve()
{
    ll n, g = 0, x;
    cin>>n;

    // vector <ll> v(n);
    for (int i = 0; i < n; i++){
        cin>>x;

        g = __gcd(x, g);
    }

    ll cnt = 0;
    for (ll i = 1; i*i <= g; i++){
        if (g%i == 0){
            cnt++;

            ll b = g/i;
            if (b != i)
                cnt++;
        }
    }

    cout<<cnt;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // int t;
    // cin>>t;

    // while (t--){
        solve();
        cout<<"\n";
    // }

    return 0;
} 
  
