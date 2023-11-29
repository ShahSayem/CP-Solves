#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 2e5+5;
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};

void solve()
{
    ll a, b, c;
    cin>>a>>b>>c;

    ll x;
    if ((a < b) && (b < c)){
        cout<<0;
    }
    else if ((a > b) && (b > c)){
        x = a|b|c;
        cout<<x; //here every bit is set of a, b, c. When we we make xor with a,
    }            //it will be lowest. similar for b, c
    else
        cout<<-1;
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
