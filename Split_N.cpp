#include <bits/stdc++.h>
#define ll long long
using namespace std;

#define pi = 3.14159265358979323846
#define MOD = 1e9+7

int checkNumbersOfOperation(ll n){
    ll x, y;
    if (n & (n-1))
        return 0;
    
    x = pow(2, floor(log(n)/log(2)));
    y = n-x;
    checkNumbersOfOperation(y-1) + checkNumbersOfOperation(y);
}
void solve()
{
    ll n;
    cin>>n;

    ll ans = __builtin_popcountll(n)-1;
    cout<<ans;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while (t--){
        solve();
        cout<<"\n";
    }

    return 0;
} 
  
