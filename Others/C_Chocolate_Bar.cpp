#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;

void solve()
{
    ll h, w;
    cin>>h>>w;

    if (h%3 == 0 || w%3 == 0){
        cout<<0;
        return;
    }

    ll mn = min(h, w);
    ll x, y, z;
    for (int i = 1; i <= h; i++){
        x = i*w; 
        y = (h-i)*((w+1)/2);
        z = (h-i)*(w/2);

        mn = min(mn, (max({x, y, z})) - min({x, y, z}));
    }

    for (int i = 1; i <= w; i++){
        x = h*i; 
        y = (w-i)*((h+1)/2);
        z = (w-i)*(h/2);
        
        mn = min(mn, (max({x, y, z})) - min({x, y, z}));
    }
    
    cout<<mn;
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
