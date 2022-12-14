#include <bits/stdc++.h>
#define   ll   long long
using namespace std;

void solve(){

    ll n;
    cin>>n;

    ll series = (n*(n+1))/2;

    for (ll i = 1; i <= n; i *= 2){
        series -= (i*2);
    }
    
    cout<<series;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
    
    return 0;
}