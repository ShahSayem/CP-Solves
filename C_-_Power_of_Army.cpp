#include <bits/stdc++.h>
#define ll long long
using namespace std;

#define pi = 3.14159265358979323846
#define MOD = 1e9+7

void solve()
{
    ll n, x, mx = 0, mn = 1000;
    cin>>n;

    while (n--){
        cin>>x;

        if (x > mx)
            mx = x;
        if (x < mn)
            mn = x;
    }
    
    cout<<mx-mn;
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
  
