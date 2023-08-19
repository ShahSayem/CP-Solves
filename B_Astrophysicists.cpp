#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;

void solve()
{
    ll n, k, g, x;
    cin>>n>>k>>g;

    ll silver = k*g, stolen;
    stolen = min(silver, n*((g-1)/2));
    x = (silver-stolen)%g;

    if (x > 0){
        stolen -= ((g-1)/2);
        x = (x+((g-1)/2))%g;
        //cout<<stolen<<" "<<x<<" ";
        if (x*2 < g)
            stolen += x;
        else 
            stolen -= (g-x);
    }

    cout<<stolen;
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
