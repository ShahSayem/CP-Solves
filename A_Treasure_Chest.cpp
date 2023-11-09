#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int x, y, k;
    cin>>x>>y>>k;

    int ans = 0, z;
    if (y <= x){
        ans += x;
    }
    else {
        ans += x;
        if (k){
            z = min(k, y-x);
            ans += z;
            y -= z;
        }    
        else {
            z = y-x;
            ans += (2*z);
            y -= z;
        }

        

        while (y > x){
            if (k)
                z = min(k, y-x);
            else 
                z = y-x;

            ans += (2*z);
            y -= z;
        }
    }

    cout<<ans;
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
