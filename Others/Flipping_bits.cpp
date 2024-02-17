#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    ll x;
    cin>>x;

    bitset <32> bset(x);
    for (int i = 0; i < 32; i++){
        bset[i] = bset[i] ^ 1;
    }
    

    cout<<bset.to_ullong();
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
