#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    ll a, b, r, x = 0, curr;
    cin>>a>>b>>r;

    if(a < b)
        swap(a, b);

    bool check = 0, p, q;
    for (ll i = 60; i >= 0; i--){
        curr = 1LL << i;
        p = a & curr, q = b & curr; //checkBit

        if (check && (p && !q) && (x+curr <= r))
            x += curr;

        if (p != q) //First diff bit
            check = 1;
    }
    
    cout<<abs((a^x) - (b^x));
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
