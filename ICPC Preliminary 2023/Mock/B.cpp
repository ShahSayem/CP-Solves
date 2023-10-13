#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;
ll n, p, k;

ll pBonacci(ll curr)
{
    if (curr < p)
        return curr;

    ll ans = 0;
    for (int i = 0; i < p; i++){
        ans += pBonacci(curr-i);
    }
    
    return ans;
}

void solve()
{
    cin>>n>>p>>k;

    cout<<pBonacci(n);
}

int main()
{
    Shah_Sayem

    int tc = 1;
    cin>>tc;
    for (int i = 1; i <= tc; i++){
        cout<<"Case "<<i<<": ";
        solve();
        cout<<"\n";
    }

    return 0;
}
