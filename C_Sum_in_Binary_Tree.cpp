#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    ll n, sum = 0;
    cin>>n;
    for (ll i = n; i > 0; i /= 2){
        sum += i;
    }
    
    cout<<sum;
}

int main()
{
    int tc = 1;
    cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }

    return 0;
}
