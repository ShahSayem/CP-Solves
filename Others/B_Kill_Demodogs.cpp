#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;

const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

///.........Graph.........///
//vector <int> adj[10000000];
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};

ll getExp(ll a, ll b)
{
    if (b == 0)
        return 1;
    if (b%2 == 0){
        auto x = getExp(a, b/2)%MOD;
        return (x*x)%MOD;
    }
    return (a * getExp(a, b-1))%MOD;
} 

ll sumSq(ll n)
{
    ll ans = (((n*(n+1))%MOD)*(2*n+1)%MOD)%MOD;
    ans = (ans*getExp(6, MOD-2))%MOD;

    return ans;
}

ll sumLinear(ll n)
{
    ll ans = (n*(n+1))%MOD;
    ans = (ans*getExp(2, MOD-2))%MOD;

    return ans;
}

void solve()
{
    ll n, ans;
    cin>>n;

    ans = (sumSq(n))%MOD;
    ans = (ans+sumSq(n-1))%MOD;
    ans = (ans+sumLinear(n-1))%MOD;

    ans = (ans*2022)%MOD;

    cout<<ans;
}

int main()
{
    Shah_Sayem

    int t = 1;
    cin>>t;
    while (t--){
        solve();
        cout<<"\n";
    }

    return 0;
}
