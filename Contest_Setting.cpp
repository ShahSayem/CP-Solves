#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const ll MAX = 1e12+5;

void solve()
{
    ll b, y, n;
    cin>>b>>y;

    ll m, noOfProb = b/y;
    m = min(ceil(double(noOfProb)/2), floor(double(noOfProb)/2));
    n = powl(2, m);

    cout<<n;
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