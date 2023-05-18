#include <bits/stdc++.h>
#define   ll   long long
using namespace std;


void solve()
{
    ll n;
    cin>>n;

    ll ans = 0, mx = 0;
    
    map <ll, ll> freq;
    for (int i = 0; i < n; i++){
        int j;
        cin>>j;

        freq[j]++;
    }  

    for (auto it = freq.begin(); it != freq.end(); it++){
        ans = max(ans, it->second);
    }    

    cout<<ans;
}

int main()
{
    // int t;
    // cin>>t;

    // while (t--){
        solve();
        // cout<<endl;     
    // }
    
    return 0;
}
    