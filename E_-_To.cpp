#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll y, ans;
    cin>>y;
 
    if (y%2){
        ans = (y/2 + 1) * -1;
    }
    else
        ans = y/2;
    
    cout<<ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // int v, t;
    // while (cin>>v>>t){
        solve();
        cout<<"\n";
    // }

    return 0;
} 
  
