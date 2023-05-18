#include <bits/stdc++.h>
#define ll long long
using namespace std;

#define pi = 3.14159265358979323846
#define MOD = 1e9+7

void solve()
{
    ll n, a, b, c, check;
    cin>>n;

    cin>>a>>b>>c;

    check = n - min({a, b, c});

    if (check > 9)
        cout<<"Yes :-D";
    else
        cout<<"No :-(";
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // int t;
    // cin>>t;
    // while (t--){
        solve();
        cout<<"\n";
    // }

    return 0;
} 
  
