#include <bits/stdc++.h>
#define ll long long
using namespace std;

#define pi = 3.14159265358979323846
#define MOD = 1e9+7

void solve()
{
    ll a, b, c, d;
    cin>>a>>b>>c>>d;

    ll ad = a*d, bc = b*c;
    if (ad == bc)
        cout<<0;
    else if (ad == 0 || bc == 0)
        cout<<1;
    else if (ad == 1 || bc == 1)
        cout<<1;
    else if ((ad%bc == 0) || (bc%ad == 0))
        cout<<1;
    else 
        cout<<2;

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
  
