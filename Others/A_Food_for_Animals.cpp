#include <bits/stdc++.h>
#define   ll   long long
using namespace std;


void solve()
{
    ll a, b, c, x, y;
    cin>>a>>b>>c>>x>>y;

    ll p = a-x;

    if (p < 0){
        c = c+p;
    }

    ll z = b-y;

    if (z < 0){
        c = c+z;
    }        
    
    if (c < 0){
        cout<<"NO";
    }
    else {
        cout<<"YES";
    }
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
    