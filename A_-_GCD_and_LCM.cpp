#include <bits/stdc++.h>
#define   ll   long long
using namespace std;


void solve()
{
    ll a, b;
    cin>>a>>b;

    ll gcd = __gcd(a, b);
    ll lcm = (a*b)/gcd;

    cout<<gcd<<" "<<lcm;

        
}

int main()
{
    int t;
    cin>>t;

    while (t--){
        solve();
        cout<<endl;     
    }
    
    return 0;
}
    