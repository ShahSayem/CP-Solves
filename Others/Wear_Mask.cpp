#include <bits/stdc++.h>
#define ll long long
using namespace std;

#define pi = 3.14159265358979323846
#define MOD = 1e9+7

void solve()
{
    int w, h;
    cin>>w>>h;

    w = ceil((double)w/3);
    h = ceil((double)h/3);

    ll ans = 1LL*w*h;
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
  
