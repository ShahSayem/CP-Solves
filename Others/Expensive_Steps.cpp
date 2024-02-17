#include <bits/stdc++.h>
using namespace std;
#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;

void solve()
{
    int n, x, y, p, q;
    cin>>n>>x>>y>>p>>q;
    
    ll inGrid = 0, mix = 0;

    inGrid = abs(x-p) + abs(y-q);
    mix = min({x, n-x+1, y, n-y+1}) + min({p, n-p+1, q, n-q+1});

    // cout<<n-x+1<<" "<<n-y+1<<" -- "<<n-p+1<<" "<<n-q+1<<"\n";
    // cout<<inGrid<<" "<<mix;
    cout<<min(inGrid, mix);
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
