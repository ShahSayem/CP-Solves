#include <bits/stdc++.h>
#define   ll   long long
using namespace std;

const ll MX = 10e15;

void solve()
{
    ll n, g = 0;
    cin>>n;
    while (n--){
        ll x;
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
    solve();
    cout<<endl;     

    return 0;
}
    