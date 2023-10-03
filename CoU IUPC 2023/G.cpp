#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    ll l, r, leapYears, ans, div4, div100, div400;
    cin>>l>>r;

    ans = (r-l+1)*52LL;
    
    div4 = (r/4)-((l-1)/4);
    div100 = (r/100)-((l-1)/100);
    div400 = (r/400)-((l-1)/400);
    leapYears = div4-div100+div400;
    cout<<ans+leapYears;
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
