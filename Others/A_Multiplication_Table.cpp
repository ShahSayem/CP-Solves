#include <bits/stdc++.h>
#define   ll   long long
using namespace std;


void solve()
{
    ll n, x, cnt = 0;
    cin>>n>>x;

    for (int i = 1; i <= n; i++){
        if (x%i == 0 && (x/i) <= n)
            cnt++;
    }
    
    cout<<cnt;

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
    