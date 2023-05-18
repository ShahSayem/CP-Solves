#include <bits/stdc++.h>
#define   ll   long long
using namespace std;


void solve()
{
    ll n, m, a, x, y;
    cin>>n>>m>>a;

    if (n%a == 0)
        x = n/a;
    else
        x = n/a + 1;

    if (m%a == 0)
        y = m/a;
    else
        y = m/a + 1;
    
    cout<<x*y;
    
}

int main()
{
    // int t;
    // cin>>t;

    // while (t--){
        solve();
        cout<<endl;     
    // }
    
    return 0;
}
    