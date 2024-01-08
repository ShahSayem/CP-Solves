#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    ll n, x, y;
    cin>>n;

    for (ll i = 1; i <= 3500; i++){
        for (ll j = 1; j <= 3500; j++){
            x = n*i*j;
            y = (4*i*j) - (n*j) - (n*i);
            if (y >= 1 && x%y == 0){
                cout<<x/y<<" "<<i<<" "<<j;
                return;
            }
        }
    }
}

int main()
{
    Shah_Sayem

    int tc = 1;
    //cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }

    return 0;
}
