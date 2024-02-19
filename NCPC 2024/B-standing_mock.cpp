#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;

void solve()
{
    ll p, s, r;
    cin>>p>>s>>r;

    if ((s < p) || (r == 1)){
        cout<<"Yes";
    }
    else {
        cout<<"No";
    }
}

int main()
{
    Shah_Sayem

    int tc = 1, x = 1;
    cin>>tc;
    while (tc--){
        cout<<"Case "<<x++<<": ";
        solve();
        cout<<"\n";
    }

    return 0;
}