#include <bits/stdc++.h>
#define ll long long
using namespace std;

#define pi = 3.14159265358979323846
#define MOD = 1e9+7

void solve()
{
    ll n, m;
    cin>>n>>m;

    if (n%2 == m%2)
        cout<<"Tonya";
    else 
        cout<<"Burenka";
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
  
