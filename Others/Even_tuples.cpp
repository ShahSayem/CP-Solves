#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int n, q, l, r;
    cin>>n>>q;

    vector <int> v(n), prefOdd(n, 0), prefEven(n, 0);
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }


    if (v[0] & 1){
        prefOdd[0] = 1;
    }
    else {
        prefEven[0] = 1;
    }

    for (int i = 1; i < n; i++){
        if (v[i] & 1){
            prefOdd[i] = prefOdd[i-1] + 1;
            prefEven[i] = prefEven[i-1];
        }
        else {
            prefEven[i] = prefEven[i-1] + 1;
            prefOdd[i] = prefOdd[i-1];
        }
    }
    
    ll x, y;
    while (q--){
        cin>>l>>r;
        l--, r--;

        if (l != 0){
            x = prefEven[r] - prefEven[l-1];
            y = prefOdd[r] - prefOdd[l-1];
        }
        else{
            x = prefEven[r];
            y = prefOdd[r];
        }

        //xC3 + yC2*x
        ll ans = 0, oddEven = 0;
        if(x > 2){ //count e+e+e combination (xC3)
            ans = (x*(x-1)*(x-2)) / 6;
        }

        if (x > 0 && y > 1){ //count o+o+e combination (yC2 * x)
            oddEven = ((y*(y-1)) / 2) * x;
            ans += oddEven;
        }

        cout<<ans<<"\n";
    }   
}

int main()
{
    Shah_Sayem

    int tc = 1;
    cin>>tc;
    while (tc--){
        solve();
        //cout<<"\n";
    }

    return 0;
}
