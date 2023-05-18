#include <bits/stdc++.h>
#define   ll   long long
using namespace std;

void solve(){

    ll n, a, b;
    cin>>n>>a>>b;

    cout<<min(b+1, n-a);
}

int main()
{
    // int t;
    // cin>>t;
    // while (t--){
        solve();
        cout<<"\n";
    // }
     
    return 0;
}