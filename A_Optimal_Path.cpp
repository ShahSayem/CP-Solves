#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n, m, ans;
    cin>>n>>m;

    ans = (m*(m+1))/2;
    for (int i = 2; i <= n; i++){
        ans += (i-1)*m + m; 
    }
    
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
  
