#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, m;
    cin>>n>>m;

    ll ans = 0, loc = 1;
    for (int i = 0; i < m; i++){
        int now;
        cin>>now;
        
        if (now >= loc)
            ans += (now-loc);
        else
            ans += n - (loc-now);

        loc = now;
    }

    cout<<ans;   
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